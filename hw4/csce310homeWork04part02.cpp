#include "csce310homeWork04part02.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
unsigned long long int pellNumber( unsigned long long int number ){
    unsigned long long int result = 0;
    unsigned long long  int* pell = new unsigned long long int[number];
    pell[0]=0;
    pell[1]=1;
    pell[2]=2;
    if(number==0){
        return pell[0];
    }
    if(number==1){
        return pell[1];
    }
   else{
        for(int i=3;i<=number;i++){
            pell[i] = (2*pell[i-1])+pell[i-2];
        }
    }
    result = pell[number];
    return result;
}

