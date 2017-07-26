#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;


int main() {
    ifstream  myfile;
	myfile.open("array.txt");

	unsigned int inputs, diff;

	myfile >> inputs >> diff;

	vector<unsigned int> arr;
	
	while(inputs--){
		int input;
		myfile >> input;
		arr.push_back(input);	
		
	}

	unsigned int length = arr.size();
    int count = 0;
    
    for(auto i = length-1; i >= 2; i--){
        cout << arr[i] << endl;
        for(auto j = i; j >= 1 ; j--){
            cout << arr[j] << endl;
            if(arr[i]-arr[j] == diff){
                //cout << arr[i] << " " <<arr[j] << endl;
                for(auto k = j; k >= 0; k--){
                    if(arr[j]-arr[k] == diff){
                        //cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        count++;
                    }
                }
            }
        }    
    }

    

    cout << count << endl;

	return 0;
}
