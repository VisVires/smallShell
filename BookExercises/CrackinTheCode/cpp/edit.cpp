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

//boolean to return if just one edit can work
bool canEdit(string word1, string word2){


    return true;
}


int main(){

    string in1, in2;
    //continue until break
    while(1){
        //get first word
        cout << "Enter word 1 or DONE to quit: ";
        cin >> in1;
        //exit point
        if(in1 == "DONE"){
            break;
        }
        //get second word
        cout << "Enter word 2; ";
        cin >> in2;
        //check if you can edit them
        if(canEdit(in1, in2)){
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
