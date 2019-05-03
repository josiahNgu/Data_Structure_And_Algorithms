#include "csce310homeWork02part01.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

bool sumToN( vector<int> number , int value ){
    int calculate =0;
    for(int i =0; i<number.size();i++){
        calculate = 0;
        for(int j =0; j<number.size();j++){
            calculate = number[i]+number[j];
            if(calculate==value){
                return true;
            }
        }
}
    return false;
}


