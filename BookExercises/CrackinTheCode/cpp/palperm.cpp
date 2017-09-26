#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool palPerm(string input){
    if(input.length() == 1 || (input.length() == 2 && (input.at(0) == input.at(1)))){
        return true;
    }
    //change string to uppercase
    //check length if even there should be pairs for each item
    unsigned int length = input.length();
    //place string into an array
    char arr[27] = {0};
    for(auto i = 0u; i < length; i++){
        if (input.at(i) == ' '){
            arr[26] += 2;
        } else {
            int j = toupper(input.at(i)) - 'A';
            arr[j]++;
        }
    } 
    
    if(length % 2 == 0){
        for(auto h = 0u; h < 27; h++){
            if(arr[h] % 2 != 0){
                return false;
            }
        }
    } else {
        for (auto h = 0u; h < 27; h++){
            int numOdd = 0;
            for(auto h = 0u; h < 27; h++){
                if(arr[h] % 2 != 0){
                    numOdd++;
                }
                if (numOdd > 1){
                    return false;
                }
            }
        }
    }
    return true;
}


int main(){

    string input;
    while(input != "DONE"){
        cout << "ENTER A PHRASE OR \"DONE\" to quit" << endl;
        getline(cin, input);
        if(palPerm(input)){
            cout << "YES" << endl;        
        } else {
            cout << "NO" << endl;
        }
    }   

    return 0;
}
