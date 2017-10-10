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

void ClearScreen();

int main(int argc, char **argv){

    ifstream myfile;
    if (argc < 1){
        cerr << "Usage " << argv[1] << endl;
        return 1;
    }
    string fileName = (argv[1]);
    //cout << "Filename is: " << fileName << endl;

    myfile.open(fileName);

    while(myfile){
        string command, definition;
        getline(myfile, command, ',');
        getline(myfile, definition);
        cout << definition << endl;
        cin.get();
        cout << command << endl;
        cin.get();
        system("clear");
    }
    
    return 0;
}

void ClearScreen(){
    cout << string(100, '\n');
}
