#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(vector<int> &arr, int i, int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void print(vector<int> arr){
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr, i, j);
        }
    swap(arr, i + 1, arr[high]);
    }
    print(arr);
    return i + 1;
}
    

void quickSort(vector<int> &arr, int low, int high){
    if (low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }    
}


int main() {
    int input, num, low, high;
    vector<int> arr;
    //get array
    cin >> num;
    while(cin >> input){
        arr.push_back(input);
    }
    
    low = 0;
    high = num - 1;
    
    quickSort(arr, low, high);
    
    return 0;
}

