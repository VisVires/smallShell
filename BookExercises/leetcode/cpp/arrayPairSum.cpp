#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arrayPairSum(vector<int>& nums) {

	int sum = 0;
	sort(nums.begin(), nums.end());

	for(auto i = 0u; i <= nums.size(); i+=2){
		sum += min(nums[i], nums[i+1]);
	}

	return sum;
        
}

int main() {
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(2);

	int result = arrayPairSum(arr);

	cout << result << endl;	


    return 0;
}

