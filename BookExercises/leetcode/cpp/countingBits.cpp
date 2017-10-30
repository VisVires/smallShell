#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	unsigned int num = 2;
	vector<int> nums;
	for (auto i = 0u; i < num+1; i++){
		if(i < 2){
			nums.push_back(i);	
		}
		else{
			int total = 0;
			int div = i;
            if (div%2 == 1)
                total++;
			while(div >= 2){
                if(div == 2){
                    break;
                }
				div = div/2;
				total++;
			}

			nums.push_back(total);
		}		
	}

	for(auto i = 0u; i < nums.size(); i++){
		cout << nums[i] <<  " " << endl;
	}

    return 0;
} 
