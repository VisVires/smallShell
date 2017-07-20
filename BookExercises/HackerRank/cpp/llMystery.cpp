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
        string input;
        myfile >> input;


    }
    return 0;
}

