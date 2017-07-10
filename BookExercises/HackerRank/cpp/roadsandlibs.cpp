#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void printEdges(vector<vector<int>> edges){
    for (auto i = 0u; i < edges.size(); i++){
        for(auto j = 0u; j < 2; j++){
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }
}

int getMin(vector<vector<int>> edges, int libCost, int roadCost){
    int minCost = 0;


    return minCost;
}


int main() {
	fstream myfile;
	myfile.open("array.txt");

    int queries, minCost, q = 0;
    myfile >> queries;
    

    while(q < queries){
        vector<vector<int>> edgeList;
        int cities, roads, libCost, roadCost;
        myfile >> cities >> roads >> libCost >> roadCost;
        for(int i = 0; i < roads; i++){
            vector<int> temp(2, 0);
            myfile >> temp[0] >> temp[1];
            edgeList.push_back(temp);
        }
        q++;
        minCost = getMin(edgeList, libCost, roadCost);
        //printEdges(edgeList);
        cout << minCost << endl;
    }


    return 0;
}

