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

    vector<int> nums(100,0);

    int n;
    myfile >> n;

    while(n--){
        int input;
        myfile >> input;
        nums[input]++;
    }

    int val;
    for(auto i = 0u; i < n; i++){
        if(nums[i] == 1){
            val = i;
            break;
        }
    }

    cout << val << endl;

    return 0;
}

