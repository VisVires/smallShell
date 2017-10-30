#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void swap(long  a, long b){
    long temp;
    temp = a;
    a = b;
    b = temp;
}

bool descSort(long i, long j){
    return i > j;
}

long binGCD(long a, long b);

int main() {
    ifstream myfile;
    myfile.open("array.txt");

    long num, input, maxGCD = -1, maxSum = -1;
    myfile >> num;

    long n = num;
    vector<long> a;
    vector<long> b;
    
    while (n--){
        myfile >> input;
        a.push_back(input);
    }

    n = num;

    while (n--){
        myfile >> input;
        b.push_back(input);    
    }

    sort(a.begin(), a.end(), descSort);
    sort(b.begin(), b.end(), descSort);

    //printArr(a);
    //printArr(b);
    
    //cout << a.size() << endl;
    //cout << b.size() << endl;

    for(auto i = 0u; i < num; i++){
        int j = 0u;
        while(b[j] >= maxGCD && a[i] >= maxGCD && j < num){
            long gcd = binGCD(a[i], b[j]);
            long sum = a[i] + b[j];
            //cout << gcd << endl;
            //cout << maxGCD << endl;
            if (gcd > maxGCD){
                maxGCD = gcd;
                maxSum = sum;
            } else if (gcd == maxGCD){
                if(sum > maxSum){
                    maxSum = sum;
                }
            }
            j++;
        }
    } 

    cout << maxSum << endl;
    return 0;
}

//binary  GCD Algorithm
long binGCD(long a, long b)
{
    long a1 = a;
    long b1 = b;
    //if a is 0 or b is 0 then either a or b are the GCD
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    //find greatest power of 2 that divides a and b
    long i;
    for (i = 0; ((a | b) & 1) == 0; ++i)
    {
        a = a/2;
        b = b/2;
    }
 
    // Dividing a by 2 until odd
    while ((a % 2) == 0)
        a = a/2;
 
    //do until b = 0
    do
    {
        //divide b by 2 until odd
        while ((b % 2) == 0)
            b = b/2;
 
        //swap a and b
        if (a > b)
            swap(a, b);
 
        b = (b - a);
        //cout << b << " " <<a1 << " " << b1 <<" " << endl;
    }   while (b != 0);
 
    /* restore common factors of 2 by bitshifting a back by 1 shifts*/
    return a << i;
}
