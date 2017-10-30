#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void printEdges(int** edges, unsigned int cities){
    for (auto i = 0u; i < cities; i++){
        for(auto j = 0u; j < cities; j++){
            if(edges[i][j] == 1)
                //cout << edges[i][j] << " ";
                continue;
            else
                //cout << 0 << " ";
                edges[i][j] = 0;
        }
        //cout << endl;
    }
}

void connectedDFS(int** edges, int cities, int city, vector<bool> &visited){
    visited[city] = true;
    for(auto i = 0u; i < cities; i++){
        if(edges[city][i] == 1 && visited[i] == false){
            connectedDFS(edges, cities, i, visited);
            //cout << "connected" << endl;
        }
    }
}


int main() {
	fstream myfile;
	myfile.open("array.txt");

    int queries, q = 0;
    myfile >> queries;
    

    while(q < queries){
        unsigned int cities, roads, libCost, roadCost, u, v, totalConnected=0;
        long int minCost;
        myfile >> cities >> roads >> libCost >> roadCost;
        //cout << cities << " " << libCost << "=";
        if (roads == 0){
            minCost = libCost * cities;
        } else {
            //create matrix
            int ** edges = new int* [cities];
            for(auto i = 0u; i < cities; i++){
                edges[i] = new int[cities];
            }
            //populate matrix
            for (auto j = 0u; j < roads; j++){
                myfile >> u >> v;
                edges[u-1][v-1] = 1;
                edges[v-1][u-1] = 1;
            }
            
           printEdges(edges, cities);
            vector<bool> visited(cities, false);
        
            for(auto city = 0u; city < cities; city++){
                if(!visited[city]){
                    connectedDFS(edges, cities, city, visited);
                    totalConnected++;
                }
            }
            //cout << totalConnected << endl;
            //cout << minCost << endl;
            minCost = roadCost * (cities- totalConnected) + (libCost * totalConnected);
             if(roadCost >= libCost){
                minCost = libCost * cities;
            }
            //delete matrix
            for(auto i = 0u; i < cities; i++){
                delete [] edges[i];
            }
            delete [] edges;
        }
        cout << minCost << endl;
        q++;
    }

    return 0;
}

/*
bool connectedBFS(vector<vector <int>> edges, int cities){
    vector<bool> visited(cities, false);
    queue<int> mq;
    int location = 0, visitedCount = 1;
    //add first node to total
    visited[0] = true;
    mq.push(0);

    while(!mq.empty()){
        location = mq.front();
        //cout << location << " ";
        mq.pop();
        for (auto i = 0u; i < edges.size(); i++){
            if(edges[location][i] || edges[i][location]){
                if(visited[i] == false){
                    visited[i] = true;
                    mq.push(i);
                    visitedCount++;
                }
            }
        }
    }
    if(visitedCount == cities){
        return true; 
    }       
    return false;
}
*/


