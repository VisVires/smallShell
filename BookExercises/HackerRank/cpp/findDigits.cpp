#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;


int main() {
	ifstream myfile;
	myfile.open("array.txt");
    
    int testcases;
    myfile >> testcases;

    while(testcases--){
        string input;
        int fullNum, digits = 0;
        myfile >> input;

        fullNum = stoi(input);
        for(auto i = 0u; i < input.size(); i++){
            if(input.at(i) != '0'){
                int digit = int(input.at(i) - '0');
                //cout << digit << endl;
                if(fullNum % digit == 0){
                    digits++;        
                }
            }
        }


        cout << " " << digits << endl;
    
    }
    return 0;
}

