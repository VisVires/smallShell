#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

int hammingDistance(const int x, const int y) {
    string binary = bitset<32>(x).to_string();
    string binary2 = bitset<32>(y).to_string();
    //cout << binary << endl;
    //cout << binary2 << endl;


    bitset<32> a(binary), b(binary2);
    bitset<32> c = a ^ b;

    //cout << c << endl;

    int count = 0;
    for(auto i = 0u; i < c.size(); i++){
        if(c[i] == 1){
            count++;
        }
    } 

    return count;
}

int main() {
    int result = hammingDistance(1,4);
    cout << result << endl;
    
    return 0;
}


