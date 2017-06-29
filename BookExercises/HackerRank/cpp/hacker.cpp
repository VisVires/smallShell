#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

bool containsWord(string s, string main);

int main() {
    int inputs;
    string s;
    ifstream myfile;
    myfile.open("array.txt");     	
    string confirm = "YES\n";
    string deny = "NO\n";
    string mainWord = "hackerrank";
    int in;
    //cout << "WE IN IT";
    myfile >> inputs;
    while (in < inputs){
        myfile >> s;
        in++;
        bool word = false; 
        word = containsWord(s, mainWord);
        if (word){
            cout << confirm;
        } else {  
            cout <<  deny;
        }
    }
    
    return 0;
}

bool containsWord(string s, string main){
    unsigned int stringLength = s.length();
    unsigned int hackLength = main.length();
    unsigned int depth = 0;
    if(stringLength < hackLength){
        return false;
    }
    for (unsigned int i = 0; i < stringLength; i++){
        if((stringLength - i) < (hackLength - depth)){
            return false;
        }
        if(s.at(i) == main.at(depth) && depth < hackLength){
            depth++;
        } else if (depth == main.length() - 1){
            return true;
        }
    }
    return true;
}
