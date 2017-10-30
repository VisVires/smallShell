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

    int testCases;
    myfile >> testCases;
    //cout << testCases << " ";

    while(testCases--){
        int students, cancel;
        myfile >> students >> cancel;
        //cout << students << " " << cancel << " ";
        int studentTime;
        int onTime = 0;
        while(students--){
            myfile >> studentTime;
            if (studentTime <= 0){
                onTime++;
            }
        }
        if(onTime < cancel){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;   
}
