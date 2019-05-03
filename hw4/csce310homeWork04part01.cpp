#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "csce310homeWork04part01.h"
using namespace std;

double optimalBST( vector<double> numbers ){
    int size = numbers.size()+1;
    double cost[size][size];
    int j;
    double sum, mincost;
    std::sort(numbers.begin(),numbers.end());
    
    
    for(int i =1; i<size;i++){
        cost[i][i-1]=0;
        cost[i][i]=numbers[i-1];
    }
    //  cost[size+1][size]=0;
    for(int d =1; d<size-1; d++ ){
        for(int i=1; i<=size-d-1;i++){
            j =i+d;
            mincost = INFINITY;
            
            for(int k=i; k<=j;k++){
                if(cost[i][k-1]+cost[k+1][j]<mincost){
                    mincost =cost[i][k-1]+cost[k+1][j];
                }
                sum =numbers[i];
            }
            for(int s =i+1; s<j;s++){
                sum = sum + numbers[s];
            }
            cost[i][j] = mincost +sum;
            
        }
    }
    return cost[1][size];
}
int main( int argc , char* argv[] ){
    int number;
    int sum = 0;
    vector<double> numbers;
    while( cin >> number ){
        numbers.push_back( number * 1.0 );
        sum += number;
    }
    
    for( int i = 0; i < numbers.size(); i++ ){
        numbers[i] /= sum;
    }
    
    try{
        fprintf( stdout , "At best, %.2f comparisons are needed on average\n" , optimalBST( numbers ) );
    }
    catch( exception e ){
        cerr << "ERROR" << endl;
    }
}
