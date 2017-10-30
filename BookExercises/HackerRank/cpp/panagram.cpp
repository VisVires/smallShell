#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    ifstream myfile;
    myfile.open("array.txt");

    string input;
    getline(myfile, input);
    
    bool word[26] = {false};

    bool pan = true;
    
    for (auto i = 0u; i < input.length(); i++){
        int num = input.at(i);
        if(num < 91 && num > 64){
            num -= 65;
        } else if (num < 123 && num > 96){
            num -= 97;
        }
        if(!word[num] && num >= 0 && num < 26){
            word[num] = true;
        } 
    }

    for (auto j = 0u; j < 26; j++){
        if(!word[j])
            pan = false;
    }

    if(pan)
        cout << "pangram" << endl;
    else
        cout << "not pangram" << endl;

    return 0;
}

