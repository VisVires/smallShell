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

    while (testcases--){
        long int numPrisoners, numSweets, prisonID;
        myfile >> numPrisoners >> numSweets >> prisonID;
        long int start = prisonID;
        long int poison = (start + numSweets - 1) % numPrisoners;
        if(poison == 0){
            poison = numPrisoners;
        }
        cout << poison << endl;
    }

	return 0;
}

