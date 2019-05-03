#include "csce310homeWork04part03.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

bool makeThreeGroups( vector<int> numbers ){
    int sum = 0;
    int number =0;
    for(int i = 1;i<numbers.size();i++){
        sum = sum + numbers[i];
    }
    if(sum%3!=0){
        return false;
    }
    if(sum%3==0){
    number = sum/3;
    for(int i =0; i<numbers.size();i++){
        if(numbers[i]>number){
            return false;
        }
    }
    }
    return true ;
}

