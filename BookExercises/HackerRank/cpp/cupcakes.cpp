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

	long int miles = 0;
	int number, input, numEaten = 0;
	vector<int> calories;
	
	//get inputs
	myfile >> number;
	while(myfile >> input){
		calories.push_back(input);
	}

	//sort cupcakes
	sort(calories.begin(), calories.end());
	//for each value raise to power of 2
    vector<int>::iterator it;
	for(int i = number-1; i >= 0; --i){
		//cout << calories[i] << endl;
        miles += calories[i] * pow(2,numEaten);
		numEaten++;        
        //cout << miles << endl;
	}

    cout << miles << endl;
	return 0;
}

