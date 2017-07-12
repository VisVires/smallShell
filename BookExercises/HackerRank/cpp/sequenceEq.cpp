#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
using namespace std;


int main() {
    ifstream myfile;
    myfile.open("array.txt");

    int numElements, item;

    myfile >> numElements;
    int n = numElements;

    map<int, int> elements;
    int pos = 1;

    while(numElements--){
        myfile >> item;
        elements.insert(pair<int, int>(item, pos));
        pos++;
    }

    map<int, int>::iterator iter;

    int x = 1;
    int val;
    while(x <= n){
       val = elements[x];
       cout << elements[val] << endl;
        x++;
    }


    return 0;
}

