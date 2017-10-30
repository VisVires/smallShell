#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;


int main() {
    string input;
    long long n, total;
    int remainder;
    long long count = 0;
    int length, remainCount = 0;
	ifstream myfile;
	myfile.open("array.txt");
    myfile >> input >> n;
    
    length  = input.length();
    remainder = n % length; 
   
    cout << length <<  " " << remainder << " ";

    for (int i = 0; i < length; i++){
        if(input.at(i) == 'a'){
            count++;
            if(i < remainder){
                remainCount++;
            }
        }
    }

    cout << count << " " << remainCount << " ";
    total = double(count)/length * n;
    cout << total << " ";
    if (count != length){total += remainCount;}

    cout << total;
    return 0;
}

