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
	srand(time(NULL)); //Setting the random seed
	
	//Goto label for start of the game
	START:
	
	int userGuess; //Variable that stores the user's guess
	int computerGuess = rand() % 100 + 1; //Variable that stores the computer's guess, only run once at the beginning of the game
	
	int numGuesses = 1; //Initializes the number of guesses at 1 because of the user's fist guess at "Enter your choice(integer)"
	
	cout << "Enter your choice(integer):"; //First guess
	cin >> userGuess;
	while(userGuess != computerGuess) //Loop through asking the user to guess until they get it right
	{
		//Give user hints based on if their number is higher or lower than the computer's one
		if(userGuess < computerGuess){ 
			cout << "Too low, try again: ";
		}else if (userGuess > computerGuess){
			cout << "Too high, try again: ";
		}
		cin >> userGuess;
		numGuesses++; //Increment the number of guesses
	}
	//End of game  message
	cout << "Congratulations, " << computerGuess << " was the number!" << endl;
	cout << "It took " << numGuesses << " guesses!" << endl;
	
	//Asking the user if they want to play again
	char choice;
	cout << "Would you like to play again(y/n)? ";  
	cin >> choice;
	
	if(choice == 'y'){ //If they do then go to the start label from the begininng
		goto START;
	}
	//If they don't then just exit the program
	return 0;
}