#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void quickSort(vector<int> arr);

void printArr(vector<int> arr){
    for (auto i = 0u; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main() {
    //open file
    ifstream myfile;
    myfile.open("array.txt");
    //set variables
    int num, input;
    vector<int> arr;
    
    //get inputs
    myfile >> num;
    while (myfile>>input){
        arr.push_back(input);
    }
    
    //send to quicksort fxn
    quickSort(arr);

    myfile.close();
    return 0;
}


void quickSort(vector<int> arr){
    if(arr.size() <= 1){
        printArr(arr);
        return;
    }
    int pivot = arr[0];
    vector<int> left;
    vector<int> equal;
    vector<int> right;
    for (auto i = 0u; i < arr.size(); i++){
        if(arr[i] < pivot){
            left.push_back(arr[i]);
        } else if (arr[i] == pivot){
            equal.push_back(arr[i]);
        } else {
            right.push_back(arr[i]);
        }
    }

    quickSort(left);
    quickSort(equal);
    quickSort(right);

}


