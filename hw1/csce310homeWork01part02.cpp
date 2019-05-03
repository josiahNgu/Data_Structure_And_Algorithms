#include "csce310homeWork01part02.h"
#include <iostream>
#include<string>
#include <cstring>
#include<algorithm>
using namespace std;

void printPermutations(string word , int permutations ){
	    int wordLength = word.length();
	    while (true && permutations!=0) {
			permutations--;
			cout << word << endl;
			int i = wordLength - 2;
	        for (; i >= 0; i--) {
	            if (word[i] < word[i+1])
	                break;
			}
			
	        if (i < 0){
	            break;
	        }
			int j = wordLength - 1;
	        for (; j>=0; --j) {
	            if (word[i] < word[j])
	                break;
	        }

	       swap(word[i], word[j]);
	       reverse(word.begin() + i + 1, word.end());
	    }
	}
