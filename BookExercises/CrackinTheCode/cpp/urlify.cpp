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

string urlify(string input, unsigned int length){
    string result = "";
    length = input.length() + length;
    for(auto i = 0u; i < input.length(); i++){
        if(input.at(i) == 32){
            result += "%20";
        } else {
            result += input.at(i);
        }
    }
    return result;
}


int main(){
    string input;
    unsigned int numOfSpaces;
    while (input != "DONE"){
        cout << "Enter a sentence or \"DONE\" to quit" << endl;
        cin.clear();
        getline(cin, input);
        if(input == "DONE"){
            break;
        }
        cin >> numOfSpaces;
        
        cin.ignore(256, '\n');
        string result = urlify(input, numOfSpaces);
        cout << result << endl;
    }

    return 0;
}
