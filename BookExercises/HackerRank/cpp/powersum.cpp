#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int findPowers(int x, int n, int count);

int main() {
    ifstream myfile;
    myfile.open("array.txt");
    
    int x, n;
    myfile >> x >> n;

    int total = findPowers(x,n,1);
    cout << total << endl;
    return 0;
}

int findPowers(int x, int n, int count){
    int val = x -(pow(count, n));
    
    if(val < 0){
        return 0;
    }
    else if(val == 0){
        return 1;
    }
    else{ 
        return findPowers(val, n, count+1) + findPowers(x, n, count + 1);
    }
}

