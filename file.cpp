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
	srand(time(NULL));
	
	START:
	
	int userGuess;
	int computerGuess = rand() % 100 + 1;
	
	int numGuesses = 1;
	
	cout << "Enter your choice(integer):";
	cin >> userGuess;
	while(userGuess != computerGuess)
	{
		if(userGuess < computerGuess){
			cout << "Too low, try again: ";
		}else if (userGuess > computerGuess){
			cout << "Too high, try again: ";
		}
		cin >> userGuess;
		numGuesses++;
	}
	cout << "Congratulations, " << computerGuess << " was the number!" << endl;
	cout << "It took " << numGuesses << " guesses!" << endl;
	
	char choice;
	cout << "Would you like to play again(y/n)? ";
	cin >> choice;
	
	if(choice == 'y'){
		goto START;
	}
	
	return 0;
}