#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <fstream>

using namespace std;


int main() {
	ifstream myfile;
	myfile.open("array.txt");

	int numOfStrings;
	map <string, int> strings;
    string input;

    myfile >> numOfStrings;
	
	while(numOfStrings--){
		myfile >> input;
		if(strings.count(input) == 0){
			strings.insert(pair<string, int>(input, 1));
		} else {
			strings[input]++;
		}
	}
/*
    map<string, int>:: const_iterator it; 
    for(it = strings.begin(); it != strings.end(); it++){
        cout << it->first << ":" << it->second << endl;
    }
*/

	int q;

	myfile >> q;
	string check;
    //cout << q;
	while(q--){
		myfile >> check;
        //cout << endl << check;
        if(strings.count(check) > 0)
		    cout << strings[check] << endl;
        else
            cout << 0 << endl;
	}
    return 0;
}

