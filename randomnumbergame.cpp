/*THIS IS A PROGRAM THAT PLAYS A RANDOM NUMBER GUESSING GAME---THE RANGE FOR THE GAME
IS INTEGERS FROM 1 TO 100---THE USER WILL BE ALLOWED AS MANY GUESSES AS POSSIBLE
THE USER WILL ALSO SEE HOW MANY GUESSES IT TOOK THEN BEFORE DECIDING ON ANOTHER GAME--
IT DEMONSTRATES THE USE OF NESTED IF STATEMENTS AS WELL AS NESTED WHILE LOOPS---ALSO DEMONSTRATES
THE USE OF THE BREAK AND CONTINUE RESERVED WORDS*/

//include the libraries needed
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
//include for less typing
using namespace std;

//always need a main function
int main()
{
	//function that uses the clock on the PC for a random number
	srand(time(NULL));
	//initialize variables needed for program
	int num;
	int guess;
	int count = 0;
	int correct;
	//bool statement for first outer loop
	bool another_game = true;
	while (another_game) {
		//this math formula guarentees a number between 1 and 100
		num = rand() % 100 + 1;
		cout << "GUESS A NUMBER 1 - 100" << endl;
		//first guess in main while loop
		cin >> guess;
		//since the formula will never reach over 100.. this while loop will always be true
		while (guess < 101) {
			//pre increment so the first guess is counted
			++count;
			if (guess == num) {
				cout << "GREAT GUESS\n";
				cout << "YOU GUESSED " << count << " TIMES\n";
				/*play again message that will auto break regardless of 0 or 1
				i do not have a catch all inputs so anything other than 1 will close program*/
				cout << "PLAY AGAIN? " << "ENTER 1 FOR YES OR HIT ANY KEY TO EXIT\n";
				cin >> correct;
				break;
			}
			//message for smaller guess
			else if (guess < num) {
				cout << "GUESS HIGHER\n";
			}
			//message for higher guess
			else if (guess > num) {
				cout << "GUESS LOWER\n";
			}
			//this cin keeps the guesses goinge inside this nested while loop
			cin >> guess;
		}
		/*this is where the cin for correct goes after the user guesses the coreect num
		it checks if 'correct' is true(1) or false(not1)*/
		if (correct) {
			count = 0;
			continue;
		}
		else {
			cout << "THANKS FOR PLAYING";
			break;
		}
	}
	return 0;
}

//WRITTEN BY PHIL SEROS
