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

bool isPerm(string a, string b){
    //check if lengths are equivalent
    if(a.length() != b.length()){
        return false;
    }
    
    string c,d;
    //copy each string
    c = a;
    d = b;
    //sort each string
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    //compare each string
    for(auto i = 0u; i < c.length(); i++){
        if(c[i] != d[i])
            return false;
    }


    return true;
}

int main(){
    
    string input1, input2;

    while(input1 != "NOPE"){
        cout << "Enter two words or \"NOPE\" to quit" << endl;
        cout << "Word 1: ";
        cin >> input1;
        if(input1 == "NOPE")
            break;
        cout << "Word 2: ";
        cin >> input2;

        if(isPerm(input1, input2)){
            cout << "\nYEP" << endl;
        } else {
            cout << "\nNOOOOOO" << endl;
        }
    }

    return 0;
}
