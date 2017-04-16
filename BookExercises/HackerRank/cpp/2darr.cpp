#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int getHourGlassSum(int x, int y, vector<vector<int>> &arr);

int main(){
    int newSum;
	int highSum = 0;
	ifstream myfile;
	myfile.open("array.txt");
	vector< vector<int> > arr(6,vector<int>(6));
    	for(int arr_i = 0;arr_i < 6;arr_i++){
       		for(int arr_j = 0;arr_j < 6;arr_j++){
        		myfile >> arr[arr_i][arr_j];
			//cout << arr[arr_i][arr_j] << " ";
       		}
		//cout << endl;
    	}
	myfile.close();
	//only send items with central cell to sum function
	//size of central item matrix is n-2 x n-2
	//first item is @ 1,1 last is at 4,4
	//exclude all with a zero or n-1
	for(int iter_i = 1; iter_i < 5; iter_i++){
		for(int iter_j = 1; iter_j < 5; iter_j++){
			newSum = getHourGlassSum(iter_i,iter_j,arr);
			if(newSum > highSum){
				highSum = newSum;
			}
		}
	}
	cout << highSum << endl;
    
    return 0;
}

int getHourGlassSum(int posx, int posy, vector<vector<int>> &arr){
	int sum = 0;
	sum += arr[posx - 1][posy - 1];
	//cout << arr[posx - 1][posy - 1] << " ";
	//cout << sum << " ";
	sum += arr[posx - 1][posy];
	//cout << arr[posx - 1][posy] << " ";
	//cout << sum << " ";
	sum += arr[posx - 1][posy + 1];
	//cout << arr[posx - 1][posy + 1] << " ";
	//cout << sum << " ";
	sum += arr[posx][posy];
	//cout << arr[posx][posy] << " ";
	//cout << sum << " ";
	sum += arr[posx + 1][posy - 1];
	//cout << arr[posx + 1][posy - 1] << " ";
	//cout << sum << " ";
	sum += arr[posx + 1][posy];
	//cout << arr[posx + 1][posy] << " ";
	//cout << sum << " ";
	sum += arr[posx + 1][posy + 1];
	//cout << arr[posx + 1][posy + 1] << " ";
	//cout << sum << " ";
	//cout << endl;
	return sum;
}
