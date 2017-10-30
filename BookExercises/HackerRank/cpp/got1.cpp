#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int getAsciiVal(char letter){
    return letter - 'a';
}


int main() {

    ifstream myfile;
    myfile.open("array.txt");
    
    string input;
    myfile >> input;

    int length = input.length();
    int occurances[26] = {0};
    bool odd;
    int oddCount = 0;


    if(length%2 == 0){
        odd = false;
    } else {
        odd = true;
    }

    for(auto i = 0u; i < input.length(); i++){
        occurances[getAsciiVal(input.at(i))]++;
    }

    for (auto j = 0u; j < 26; j++){
        if(occurances[j] % 2 == 1){
            oddCount++;
        }    
    }

    if(odd){
        if(oddCount > 1){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }

    } else {
        if (oddCount > 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

