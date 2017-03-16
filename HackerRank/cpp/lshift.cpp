#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


void getNumbers(ifstream &myfile, vector<int>*, int num);
void outputArr(vector<int>, int num);
void lshift(vector<int>* , int num);

int main() {
    //create vector for storing numbers
    vector<int> arr;
    //open array file
    ifstream myfile;
    myfile.open("array.txt");     	
    
    //parse first line
    int num, shift;
    myfile >> num >> shift;
    
    //place numbers in array    
    getNumbers(myfile, &arr, num);
    
    //output current contents of array
    //outputArr(arr, num);

    //shift numbers d positions left
    if(shift == 0)
        outputArr(arr, num);
    else{
        int newPos;
        //int last = arr[num-1];
        vector<int> newArr(num);
        cout << endl;    
        for (int i = 0; i < num; i++){
            newPos = (i + num - shift) % num;
            //cout << newPos << " " << arr[i] << endl;          
            newArr[newPos] = arr[i];
        }
        outputArr(newArr, num);
    }    
    return 0;
}


void getNumbers(ifstream &myfile, vector<int>* arr, int num){
    //add from file to vector
    for(int i = 0; i < num; i++){
        int n;
        myfile >> n;
        arr->push_back(n);
    }
    //close array file
    myfile.close();
}

//output contents of vector
void outputArr(vector<int> arr, int num){
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
}

/*
void lshift(vector<int>* arr, int num){
    int last = arr[num-1];
    for (int i = num-1; i > 0; i--){
        arr[i] = arr[i-1];
    }    
    arr[0] = last;
}
*/
