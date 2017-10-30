#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

int reverse(int x);

int main() {
    int i, j, divisor;
    int bDays = 0;
	ifstream myfile;
	myfile.open("array.txt");
    myfile >> i >> j >> divisor;
    for(int m = i; m <= j; m++){
        int rev = reverse(m);
        //cout << rev << " ";
        int diff = abs(m-rev);
        if(diff % divisor == 0){
            bDays++;
        }
    }
    cout << bDays;
    return 0;
}

int reverse (int x){
    string num = to_string(x);
    reverse(num.begin(), num.end());
    return stoi(num);
}
