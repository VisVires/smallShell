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
    vector<int> clouds;
    int num, jumpDist, cloud, energy = 100;
    
    myfile >> num >> jumpDist;
    while(myfile >> cloud){
        clouds.push_back(cloud);
    }

    int i = 0;
    while(i < num){
        i += jumpDist;
        if (clouds[i] == 1){
            energy -= 3; 
        } else {
            energy--;
        }
    }
    
    if(clouds[0] == 1){
        energy -= 2;
    }
    cout << energy << endl;

    return 0;
}

