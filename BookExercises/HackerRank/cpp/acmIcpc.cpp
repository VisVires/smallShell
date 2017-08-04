#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <bitset>
using namespace std;


int main() {
    ifstream myfile;
    myfile.open("array.txt");


    int numOfPeople; 
    int numOfTopics;
    myfile >> numOfPeople >> numOfTopics;

    const int nOT = 5;
    //const size_t size = numOfTopics;

    vector<string> people;
    while (numOfPeople--){
        string person;
        myfile >> person;
        people.push_back(person);
    }

    bitset<nOT> a(people[0]), b(people[1]);
    bitset<nOT> c = a | b;

    cout << c << endl;

    return 0;
}

