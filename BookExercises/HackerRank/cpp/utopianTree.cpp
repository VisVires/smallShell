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

    int testcases;
    myfile >> testcases;
    
    while(testcases--){
        int cycles;
        myfile >> cycles;
        int height = 1;

        for (auto i = 0u; i < cycles; i++){
            if(i%2 == 0){
                height += height;
            } else {
                height++;
            }
        }
    
        cout << height << endl;
    }
    return 0;
}

