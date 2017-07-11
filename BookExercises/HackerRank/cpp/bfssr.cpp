#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <queue>
using namespace std;

void printMatrix(vector<vector<int>> matrix){
    for(auto i = 0u; i < matrix.size(); i++){
        for(auto j = 0u; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void runBFS(vector<vector <int>> matrix, unsigned int start, unsigned int n, unsigned int m, int q){
    vector<bool> visited(n+1, false);
    vector<int> distances(n, 0);
    queue<int> mq;
    int pos = start;
    int loops = 1;

    visited[pos] = true;
    mq.push(pos);

    while(!mq.empty()){
        pos = mq.front();
        mq.pop();
        //returning very large size for invalid numbers
        //cout << pos << " " << matrix[pos].size();
        //if(q == 0)
        //    return;

        for(auto i = 0u; i < matrix[pos].size(); ++i){
            int val = matrix[pos][i];
            if(visited[val] == false){
                visited[val] = true;
                distances[val] = loops * 6;                    
                mq.push(val);
            }
        }
        loops++;
    }

    for(auto i = 1u; i < visited.size(); i++){
        if(i != start){
            if(visited[i] == false){
                cout << -1 << " ";
            } else {
                cout << distances[i] << " ";
            }
        }
    }
    cout << endl;

}


int main() {
    ifstream myfile;
    myfile.open("array.txt");
    
    //get query number
    int q; 
    myfile >> q;
    int query = 0;
    
    //run queries
    while(query < q){ 
        unsigned int n, m, u, v, s;
        //get points and edges
        myfile >> n >> m;
        //create matrix
        vector<vector<int>> matrix(n + 1);
       //post to matrix
        for(auto i = 0u; i < m; ++i) {
            myfile >> u >> v;
            //push u value to v to make adjacency list
            matrix[u].push_back(v);
            matrix[v].push_back(u);
        }
       
        //printMatrix(matrix);

        //vector to hold distances
        //get starting value
        myfile >> s;
        //run bfs        
        runBFS(matrix, s, n, m, query);
        //increment queries
        query++;
    }
    return 0;
}

