/*
 * bulls.cpp
 *
 *  Created on: Jan 3, 2020
 *      Author: alekseigribko
 */





#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void error(string s){

	throw runtime_error(s);
}
int randint(int low, int high){ // random number generator
	int range = high - low;
	return (rand()% range) +1;
}

int main()
try{
	bool success = false;

	while(!success){

	int n = 0;

	cout << "Please enter a seed to help me play: " << endl;
	cin >> n;

	srand(n);

	vector<int>guess;

	while(guess.size()<4)
		guess.push_back(randint(0,9));

	int vect = 0;

	vector<int> bulls;

	cout << "Please enter your guess: " <<endl;

	while (cin >> vect){
		bulls.push_back(vect);
		if(bulls.size()==4) break;
	}

	int b = 0;
	int c = 0;

	for(int i =0; i<guess.size();++i){
		for(int j =0;j<bulls.size();++j){
			if( i == j){
				if(guess[i]==bulls[j])
				++b;
			}
			else{
				if(guess[i]==bulls[j])
				++c;
			}

		}
	}


	for(int x : guess)
		cout << x;

	cout << "\nYou've got " << b << " bull(s) and "<< c << " cow(s)\n" << endl;

	if(b+c == 0){
		success = false;
		cout << "\nTry again!\n";
	}
	else{
		char h = ' ';
		cout << "You got something right!\n"
			 << "Try again? (y/n) \n";
		cin >> h;
		if (h == 'y')
			success = false;

		else if (h == 'n')
			success = true;

		else
			error("wrong value");

	}


	}
	return 0;

}
catch(exception&e){
	cerr<<"error:" <<e.what() << endl;
}
