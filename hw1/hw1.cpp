// #include "csce310homeWork01part01.h"
#include <iostream>
#include <cstdio>
#include<string>
#include <stdio.h>
#include <sstream>

/*this method should calculate how many odd 
number are there in the given int value 
*/

unsigned long long int oddDigits( unsigned long long int digits ){
printf("number = %llu\n" ,digits); //check whether digits is correct
int length = std::to_string(digits).length(); // count the length of digits 
int a[length]; // the array
int i =0;
long long int temp = digits;
int counter = 0;

while (temp) { // loop till there's nothing left
a[i] = temp % 10; // assign the last digit
temp /= 10; // "right shift" the number
//  printf("a[%d] is %d\n ",i, a[i]);  
 i++;
}
for(int i =0; i<length;i++){
    if(a[i]%2!=0){
    counter ++;
    }
}
printf("The input %llu will produce the output %d\n",digits,counter);

return 0;
}


int main(int argc, char* argv[]){
unsigned long long int value = atoi(argv[1]); //convert the arg to an ull
oddDigits(value); //call the method
return 0;
}
