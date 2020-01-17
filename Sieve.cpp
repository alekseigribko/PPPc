/*
 * Sieve.cpp
 *
 *  Created on: Dec 30, 2019
 *      Author: alekseigribko
 */




#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int p = 2;

	vector<int> marked;
	vector<int> allnumbers;
	vector<int> primes;

	for(int z = 1;z<=100;++z)
		allnumbers.push_back(z);

	bool has_unmarked = false;
	do{
		has_unmarked = false;
		for(int v=p;v<allnumbers.size(); ++v){
			bool is_marked = false;
			for(int h = 0; h<marked.size(); ++h){
				if(marked[h] == v) is_marked=true;
			}
			if(is_marked == false) {
				has_unmarked = true;
				p = v;

				break;
			}
		}
		if(has_unmarked) {
			for(int i = 2*p; i<allnumbers.size(); i += p){
				marked.push_back(i);
			}
		}
		p++;
	}while(has_unmarked);

	//int j = 0;
	//int k = j++; // k = 0
	//int g = ++k; // g = 1

	for(int i = 1; i<allnumbers[allnumbers.size() - 1]; i++){
		bool is_marked = false;
		for(int h = 0; h<marked.size(); ++h){

			if(marked[h] == i) {
				is_marked=true;
				break;
			}
		}

		if (!is_marked) {
			cout << i << endl;
		}
	}

}
