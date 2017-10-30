#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

int getAsciiVal(char letter){
    return letter - 'a';
}


int main() {
    ifstream myfile;
    myfile.open("array.txt");

    int tests;
    myfile >> tests;

    while(tests--){
        int count = 0;
        string input;
        myfile >> input;

        int j = input.length() - 1;
        for (auto i = 0u; i <= j; i++){
            char newChar;
            if(input.at(i) != input.at(j)){
                int val1 = getAsciiVal(input.at(i));
                int val2 = getAsciiVal(input.at(j));
    
                if (val1 > val2){
                    while(val1 != val2){
                        val1--;
                        count++;
                    }
                    newChar = static_cast<char>(val1+ 'a');
                    input.at(i) = newChar;
                } else {
                    while(val1 != val2){
                        val2--;
                        count++;
                    }
                    newChar = static_cast<char>(val2+ 'a');
                    input.at(j) = newChar;
                }
            }
            j--;
        }
        //cout << input << endl;
        cout << count << endl;

    }
    return 0;
}

