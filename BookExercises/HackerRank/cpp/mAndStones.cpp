#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <set>
using namespace std;

int main() {
    ifstream myfile;
    myfile.open("array.txt");

    int testCases, numStones, a, b;
    myfile >> testCases;
   
    while(testCases--){
        //get three lines
        myfile >> numStones >> a >> b;
        int a1 = min(a,b);
        int a2 = max(a,b);
        int curr = a1 * (numStones-1);
        int max = a2 * (numStones-1);
        int diff = a2 - a1;
        vector<int> finalSet;
        if(a == b){
            cout << curr << endl;
        } else {
            while(curr <= max){
                finalSet.push_back(curr);
                curr += diff;
            } 
            for(auto i = 0u; i < finalSet.size(); i++){
                cout << finalSet[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
