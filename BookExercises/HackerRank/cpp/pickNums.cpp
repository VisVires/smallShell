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

	vector<int> num(101, 0);
    int sizeOfArray, input, max = 0;

    myfile >> sizeOfArray;
    while(myfile >> input){
        num[input]++;
        //cout << input << " " <<num[input] << endl;
    }

    for(auto i = 0u; i < num.size(); ++i){
        if(num[i] + num[i+1] > max)
            max = num[i] + num[i+1];
    }

    cout << max;

    return 0;
}

