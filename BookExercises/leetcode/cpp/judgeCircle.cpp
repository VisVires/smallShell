#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool judgeCircle(string moves){
    int posx= 0;
    int posy = 0;

    for(auto i = 0u; i < moves.length(); i++){
        switch (moves.at(i)){
            case 'U':
                posy++;
                break;
            case 'D':
                posy--;
                break;
            case 'L':
                posx--;
                break;
            case 'R':
                posx++;
                break;
        }
    }

    if (posx == 0 && posy == 0){
        return true;
    }
    return false;

}

int main() {

    string string1 = "UD";
    string string2 = "LL";

    if(judgeCircle(string1))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    if(judgeCircle(string2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    
    return 0;
}

