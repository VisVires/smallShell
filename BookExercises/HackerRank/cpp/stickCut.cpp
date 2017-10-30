#include <cmath>
#include <cstdio>
#include <list>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void printSticks(list<int> sticks){
    list<int>::iterator it;
	for(it = sticks.begin(); it != sticks.end(); it++){
		cout << *it << " "; 
	}
	cout << endl;
}


int main() {
	ifstream myfile;
	myfile.open("array.txt");
	    
	int stickNum;
	myfile >> stickNum;

	int stick;
	list<int> sticks;

	while(myfile >> stick){
		sticks.push_front(stick);
	}

	sticks.sort();

	while(!sticks.empty()){
		//printSticks(sticks);
        cout << sticks.size() << endl;
		int num = sticks.front();
        list<int>::iterator it;
        //could count lenght of total difference then move on to speed up time only iterating through once
		for(it = sticks.begin(); it != sticks.end() ; ++it){
			if(*it - num <= 0){
				sticks.remove(*it);
				it--;
			} else {
				*it -= num;
			}  	
		}
	}

	return 0;
}

