#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

int processString(string s){
    char curr = s.at(0);
    int total = 0;
    for(auto i = 1u; i < s.length(); i++){
        if(curr == s.at(i)){
            total++;
        } else {
            curr = s.at(i);
        }
    } 
    return total;
}


int main() {
    ifstream myfile;
    myfile.open("array.txt");

    int tests;
    myfile >> tests;

    while(tests--){
        string input;
        int total;
        myfile >> input;
        total = processString(input);

        cout << total << endl;
    }

    return 0;
}

