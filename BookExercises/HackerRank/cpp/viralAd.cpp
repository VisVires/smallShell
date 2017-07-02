#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int addDay(int people);

int main() {
    int day;
    int people = 5, total = 0, days = 0;
	cout << "Enter number of days: ";
	cout.flush();
    cin >> day;
    while(days != day){
        days++;
        total += people/2;
        people = addDay(people/2);
    }
    cout << total << "\n";
    return 0;
}

int addDay(int people){
    return people * 3;
}
