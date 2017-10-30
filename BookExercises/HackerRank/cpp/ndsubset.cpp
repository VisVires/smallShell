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
    
    int num, k, in;
    vector<int> arr;
    
    //get inputs
    cin >> num >> k;
    
    while(cin >>in){
        arr.push_back(in);
    }


    return 0;
}

