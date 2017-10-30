#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
	ifstream myfile;
    myfile.open("array.txt");     	 
    int usb, keyboard, money, numKey, numUsb, finalSum;
    vector<int> keys;
    vector<int> drives;
    myfile >> money >> numKey >> numUsb;
    int i = 0, j = 0;
    
    while(i < numKey){
        i++;
        myfile >> keyboard;
        keys.push_back(keyboard);
    }
    while(j < numUsb){
        j++;
        myfile >> usb;
        drives.push_back(usb);
    }
    
    sort(drives.begin(), drives.end());
    sort(keys.begin(), keys.end());
    
    if(drives[0] + keys[0] > money){
        finalSum = -1; 
    } else {
        int diff = money;
        int sum;
        for(int i = drives.size()-1; i >= 0; i--){
            for(int j = keys.size()-1; j >= 0; j--){
                sum = drives[i] + keys[j];
                if(sum == money){
                    finalSum = sum;
                    diff = 0;
                } else if (sum < money){
                    if(diff > money - sum){
                        diff = money - sum;
                        finalSum = sum;
                    }
                }
            }
        }
    }
    
    cout << finalSum;
    
    return 0;
}
