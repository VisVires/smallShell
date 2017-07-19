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

    int gems[26] = {0};
    int completed = 0;

    while (completed < tests){
        string input;

        myfile >> input;
        for(auto i = 0u; i < input.length(); i++){
            int pos = getAsciiVal(input.at(i));
            if(gems[pos] == completed){
                gems[pos]++;
            }
        }
        completed++;
    }
   
    int count = 0;
    for(auto i = 0u; i < 26; i++){
        if(gems[i] == completed){
            count++;
        }
    }

    cout << count << endl;
    

    return 0;
}

