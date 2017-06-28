#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> scores;
    int alice = 0;
    int bob = 0;
    int input;
    ifstream myfile;
    myfile.open("array.txt");     	 
    while(myfile >> input){
        scores.push_back(input);
    }
    for(unsigned int i = 0; i < (scores.size()/2); i++){
        int j = i + (scores.size()/2);
        if (scores[i] > scores[j]){
            alice++;  
        } else if (scores[i] < scores[j]){
           bob++;                                                                        }
    }
    cout << alice << " " << bob;
    return 0;
}
