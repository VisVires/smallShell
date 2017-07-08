#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    fstream myfile;
	int num, count = 0;
	bool input;
	vector<bool> clouds;
	myfile.open("array.txt");
	myfile >> num;
	while(myfile >> input){
		if (input == 0){
			clouds.push_back(true);
		} else {
			clouds.push_back(false);
		}
	}
    unsigned int pos = 0;
    while(pos < num-1){
        if(clouds[pos+2] == false){
            pos++;
            count++;
        } else {
            pos += 2;
            count++;
        }
    }

    cout << count;


	return 0;
}

