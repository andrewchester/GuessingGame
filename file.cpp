/*
* Guessing Game
* Andrew Chester Per. 2
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>   

using namespace std;

int main()
{
	int userGuess;
	srand(time(NULL));
	int computerChoice = rand() % 100 + 1;
	
	cout << "Enter your choice(integer):";
	cin >> userGuess;
	
	
	return 0;
}