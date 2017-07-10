#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int getLetterValue(char letter){
    return int(letter) - 97;
}

int getArea(int width, int height){
    return width * height; 
}


int main() {
    ifstream myfile;
	myfile.open("array.txt");
	int inputNum = 26, i = 0, input, maxHeight = 0;
	int heights[26];
    string word;
	while (i < inputNum){
		myfile >> input;
		heights[i] = input;
		i++;
	}
	myfile >> word;

    int width = word.size();
    for(auto letter = 0; letter < word.size(); letter++){
        int height = heights[getLetterValue(word.at(letter))];
        if(height > maxHeight){
            maxHeight = height; 
        }
    }

    cout << getArea(width, maxHeight) << endl;

	return 0;
}
