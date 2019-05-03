#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "csce310homeWork03part01.h"
using namespace std;


double minimumST( vector< vector<double> > adjacencyMatrix ){
    int dimensions = adjacencyMatrix.size();
    int mincost = 0;
    bool visited[dimensions];
    int cycle =1;
    
    for(int x =0;x<dimensions;x++){
        visited[x]=false;
    }
    for(int i =0; i<dimensions;i++){
        for(int j=0;j<dimensions;j++){
            if(adjacencyMatrix[i][j]==0){
                adjacencyMatrix[i][j]=INFINITY;
            }
        }
    }
    visited[0]=true;
    while(cycle<dimensions){
        int a=0, b=0,min=0;
        for(int x = 0; x<dimensions;x++){
            for(int y=0;y<dimensions;y++){
                if(visited[x]==true && visited[y]==false && adjacencyMatrix[x][y]<adjacencyMatrix[a][b]){
                    a=x;
                    b=y;
                }
            }
        }
        visited[a] = true;
        visited[b] = true;
        min = adjacencyMatrix[a][b];
        mincost = mincost + min;
        cycle++;
    }
    
    
    return mincost;
}


