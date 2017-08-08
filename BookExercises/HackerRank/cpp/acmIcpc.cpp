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


    unsigned int numOfPeople, tokens; 
    myfile >> numOfPeople >> tokens;

    //const int nOT = makeConst(numOfTopics);
    //const size_t size = numOfTopics;

    vector<string> people;
    while (numOfPeople--){
        string person;
        myfile >> person;
        people.push_back(person);
    }

    vector<string> results;

    int maxTopics = 0;
    for (auto i = 0u; i < people.size()/2+1; i++){
        string string1 = people.at(i);
        for(auto j = people.size()-1; j > people.size()/2; j--){ 
            string string2 = people.at(j);
            int ones = 0;
            string result = "";
            for(auto k = 0u; k < tokens; k++){
                if(string1[k] == '1' || string2[k] == '1'){
                    result += '1';
                    ones++;
                    if (ones >= maxTopics){
                        maxTopics = ones;
                    }
                } else {
                    result += '0';
                }
            }
            results.push_back(result);
        }
        //cout << endl;
    }

    int totalTeams = 0;
    for(auto i = 0u; i < results.size(); i++){
        int count = 0;
        string word = results[i];
        for (auto j = 0u; j < word.size(); j++){
            if(word[j] == '1'){
                count++;
                if (count == maxTopics){
                    totalTeams++;
                }
            }
        }
    }
    
    cout << maxTopics << endl;
    cout << totalTeams << endl;
    return 0;
}


