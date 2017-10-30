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

	int tests;
    myfile >> tests;

    while(tests--){
        string input;
        bool funny = true;
        myfile >> input;
        int j = input.length()-2;
        
        for(auto i = 1u; i < input.length(); i++){
            if(i == j)
                break;
            int numA1, numA2, numB1, numB2;
            numA1 = getAsciiVal(input.at(i));
            numA2 = getAsciiVal(input.at(i-1));
            numB1 = getAsciiVal(input.at(j));
            numB2 = getAsciiVal(input.at(j+1));
            int result1 = abs(numA1 - numA2);
            int result2 = abs(numB1 - numB2);
            //cout << result1 << " " << result2 << endl;
            if(!(abs(numA1 - numA2) == abs(numB1 - numB2))){
                funny = false;
                break;
            }
            j--;
        }
        if (funny){
            cout << "Funny" << endl;
        } else {
            cout << "Not Funny" << endl;
        }
    }

	return 0;
}

