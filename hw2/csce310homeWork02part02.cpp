#include <vector>
#include "csce310homeWork02part02.h"
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int overlappingIntervals( vector<int> start , vector<int> end ){
    int counter = 0, i = 0, j = 1, max = 0;
    sort(end.begin(), end.end());
    while(i<start.size()&& j<end.size()) {
        
        if(counter==0){
            if(start[i]<end[j]){
                counter ++;
                i++;
            }
        }
        if(counter>0){
        if (start[i]<=end[j]&& start[i]<=end[j-1]){
            counter++;
            i++;
            if(counter>max){
                max = counter;
            }
        }
        }

        else{
            counter = 0;
            j++;
        }
    }
    return max;
}

