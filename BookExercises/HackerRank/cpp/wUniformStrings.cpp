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

    string s;
    myfile >> s;

    int n;
    myfile >> n;

    vector<bool> uss(10000000);
    int count = 0;
    bool exist = false;

    for(auto i = 0u; i < s.length(); i++){
        int num = s.at(i) - 'a' + 1;
        count += num;
        //cout << num << endl;
        if(i+1 != s.length()){
            if(s.at(i) != s.at(i+1)){
               uss[count] = true;
               count = 0;
            } else {
                uss[count] = true;
            }    
        } else {
            uss[count] = true;
        }
    }

    while(n--){
        int input;
        myfile >> input;
        //cout << input << endl;
        if(uss[input])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        exist = false;
    }
    
    return 0;
}

