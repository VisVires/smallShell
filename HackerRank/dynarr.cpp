#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int checkType(int num);


int main() {
    ifstream myfile;
    myfile.open("array.txt");     	
    int lastAns = 0;
    int type;
    int sequenceLength, queries;
    sequenceLength = 2;
    myfile >> numOfSeq;
    myfile >> queries;
    //cout << sequences << endl;
    //cout << queries << endl;
    vector<vector<int>> arr(queries, vector<int>(sequenceLength));
    for (int list_i = 0; list_i < queries; list_i++){
        for (int q_i = 0; q_i < sequenceLength + 1; q_i++){
            int num;
            myfile >> num;
            arr[list_i][q_i] = num;
            //cout << arr[list_i][q_i] << " ";
        }
        //cout << endl;
    }
    myfile.close();
    
    //create vector of vectors to create sequence lists  
    vector<vector<int>> seq(numOfSeq, vector<int>());
    
    //for each sequence in list check query type
    for(int i = 0; i < queries; i++){
        type = arr[i][0];
        cout << type << endl;
        if (type == 1){
    
        }
        else if(type == 2){
        
        }
    }   
    return 0;
}


