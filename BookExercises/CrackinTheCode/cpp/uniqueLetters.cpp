#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isUnique(string input){
    //brute force
    //go through each letter
    //see if it matches another letter
    //faster 
    //make array of each character
    int arr[1024] = {0};
    for(auto i = 0u; i < input.length(); i++){
        char c = input[i];
        int letter = (int) c;
        if(arr[letter] == 0){
            arr[letter]++;
        } else {
            return false;
        }
    } 
    return true;
}


int main(){

string input;

while (input != "Done"){
    cout << "\nEnter Done to quit or...." << endl;    
    cout << "Enter a word and I will check if it is unique: ";
    getline(cin, input);
    if(isUnique(input)){
        cout << "\nIt is!!" << endl;
    } else {
        cout << "Nope" << endl;
    }
}


    return 0;
}
