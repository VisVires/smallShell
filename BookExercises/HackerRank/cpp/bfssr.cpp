#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <queue>
using namespace std;

int main(){

    ifstream myfile;
    myfile.open("array.txt");
    long int q, n, m, u, v, i, j;
    myfile >> q;
    while(q--)
    { 
        myfile >> n >> m;
        vector <long int> vec[n+1];
        while(m--)
        { 
            myfile >> u >> v;

            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        bool visited[n+1]={false};
        long int dist[n+1]={0};
        long int start;
        
        myfile >> start;
         
        deque <long int> q;
        q.push_front(start);
        visited[start] = true;
        dist[start] = 0;
        int loop = 1;
        
        //run BFS    
        while(!q.empty())
        {   
            long int p = q.front();
            q.pop_front();
            for(i = 0; i < vec[p].size(); i++){
                int val = vec[p][i];
                if(visited[val] == false){  
                    visited[val] = true;
                    q.push_front(val);
                    if(dist[val] == 0)
                        dist[val] = loop * 6;
                }
            }
            loop++;
        }
        for( j=1; j<=n; j++){ 
            if(j!=start)
            { 
                if(dist[j]==0)
                    cout << "-1" << " ";
                else
                    cout << dist[j] << " ";
            }
        }
                cout<<endl;
    }
    return 0;
}

