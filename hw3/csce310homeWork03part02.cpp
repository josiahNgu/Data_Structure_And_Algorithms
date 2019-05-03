#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "csce310homeWork03part02.h"
using namespace std;



vector< vector<double> > allPairsSP( vector< vector<double> > adjacencyMatrix , int i ){
    int size = adjacencyMatrix.size();
    
    for(int k=0; k<i;k++){
        for (int x =0; x<size; x++) {
           for (int y=0; y<size; y++) {
               adjacencyMatrix[x][x]=0;
               if(adjacencyMatrix[x][y]==-1){
                   adjacencyMatrix[x][y]=INFINITY;
               }
               adjacencyMatrix[x][y] = min(adjacencyMatrix[x][y], adjacencyMatrix[x][k]+adjacencyMatrix[k][y]);
            }
        }
    }
    
    for(int x =0;x<size;x++){
        for(int y =0; y<size; y++){
            if(adjacencyMatrix[x][y]==INFINITY){
                adjacencyMatrix[x][y]=-1;
            }
        }
    }
    return adjacencyMatrix;
}


