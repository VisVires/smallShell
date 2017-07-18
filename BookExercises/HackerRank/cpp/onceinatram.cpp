#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int findSum(string ticket, int start, int finish);

int main() {
    ifstream myfile;
    myfile.open("array.txt");

    int ticket;
    string sTicket;
    myfile >> ticket;

    bool lucky = false;

    ticket++;

    while(!lucky){
        sTicket = to_string(ticket);
        int total1 = findSum(sTicket, 0, 3);
        int total2 = findSum(sTicket, 3, 6);
        if(total1 == total2){
            lucky = true;
            ticket = stoi(sTicket);
            break;
        }
        ticket = stoi(sTicket);
        ticket++;
    }

    cout << ticket << endl;

    return 0;
}

int findSum(string ticket, int start, int finish){
    int total = 0;
    
    for (int i = start; i < finish; i++){
        total += ticket.at(i) - '0';
    } 

    return total;
}
