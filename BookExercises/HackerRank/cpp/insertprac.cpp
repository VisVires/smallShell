#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void printList(vector<int> list);

int main() {
    fstream myfile;
    myfile.open("array.txt");
    int num, input, unsorted;
    bool sorted = false;
    vector<int> inputs;
    myfile >> num;
    while(myfile >> input){
        inputs.push_back(input);
    }

    unsorted = inputs[num-1];

    for(int i = num-1; i >= 0; i--){
        if(inputs[i-1] > unsorted){
            inputs[i] = inputs[i-1]; 
        } else if (inputs[i-1] < unsorted || i == 0){
             inputs[i] = unsorted;
             sorted = true;
        }
        printList(inputs);
        if(sorted) break;
    }  
    myfile.close();
    return 0;
}

void printList(vector<int> list){
    for(auto i = 0; i < list.size(); i++){
        cout << list[i] << " ";
    }
    cout << "\n";
}
