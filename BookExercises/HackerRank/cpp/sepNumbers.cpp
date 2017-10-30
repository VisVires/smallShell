#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
using namespace std;


int main() {
    ifstream myfile;
    myfile.open("array.txt");
    string yes = "YES";
    string no = "NO";


    int num;
    myfile >> num;

    while(num--){
        string input;
        myfile >> input;

        map<long long int, int> possibleStarts;
        //check for zero at start
        if(input.at(0) == '0'){
           cout << no << endl;
           
        } else {
            //check for 0,0 then 0,1 then 0,2 then 0,n/2 and save all in vector
            //check against strings of equal length throughout the number
            int numLength = input.length();
            int count = 0;
            for(auto i = 0u; i < (input.length()/2)+1; i++){
                while(count != i+1){
                    
                }
            }      
        } 
    
    }
    
    return 0;
}

