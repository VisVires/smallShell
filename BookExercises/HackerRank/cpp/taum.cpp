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
		int b,w,x,y,z, mx, mn, totB, totW;
        vector<int> bw;
		myfile >> b >> w >> x >> y >> z;

        bw.push_back(x);
        bw.push_back(y);

	    if(bw[0] >= bw[1]){
            mx = 0;
            mn = 1;
        } else {
            mx = 1;
            mn = 0;
        }

        cout << bw[mx] << " " <<bw[mn] << " ";

        if(bw[mx] >= z){
            
        }
	}	

	return 0;
}

