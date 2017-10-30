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

    int ad, am, ay, dd, dm, dy;

    myfile >> ad >> am >> ay >> dd >> dm >> dy;
    //cout << ad << am << ay << endl;
    int fine = 0;

    if(ay <= dy){
        if(ay < dy){
            fine = 0;
        } 
        else if (ay == dy && am <= dm){
            if(am < dm){
                fine = 0;
            } else if (am == dm && ad <= dd){
                fine = 0;
            } else {
                int diff = ad - dd;
                fine = 15 * diff;
            }
        } 
        else {
           int diff = am - dm;
           fine = 500 * diff;
        }
    } else {
        fine = 10000;
    }

    cout << fine << endl;
    return 0;
}

