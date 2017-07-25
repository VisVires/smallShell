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
	
	int num;
	myfile >> num;

	while(num--){
		string input;
		myfile >> input;

		int changes = 0;
		vector<int>letters1(26, 0);
        vector<int>letters2(26, 0);
		unsigned int length = input.length();
		if(length % 2 == 0){
			for(auto i = 0u; i < length/2; i++){
                int pos = getAsciiVal(input.at(i));
                letters1[pos]++;
			}
			for(auto i = length/2; i < length; i++){
                int pos = getAsciiVal(input.at(i));
                letters2[pos]++;
			}
            for(auto i = 0u; i < 26; i++){
                if(letters1[i] != letters2[i]){
                    int diff = abs(letters1[i] - letters2[i]);
                    changes += diff;
                }
            }
            changes = changes/2;
		} else {
			changes = -1;
		}

		cout << changes << endl;
		
	}
	
    return 0;
}

