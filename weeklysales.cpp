#include <iostream>

#include <time.h>

#include <stdlib.h>

using namespace std;





int main() {

	int guess, num, continue = 1, try_again, count;

	bool correct = true;

	srand(time(NULL));

	while ((continue == 1) {

		while (correct) {

			num = rand() % 100 + 1;

			cin >> guess;

			++count;

			if (num == guess) {

				cout << “You guessed the right number”;

				{

			else if (num > guess) {

				cout << “Sorry your guess is higher than expected”;

				{

			else if (num < guess) {

				cout << “Sorry your guess is higher than expected”;
				{

			cout << “try again ? / tenter 1 for yes 'and' 0 for no”;

			cin >> try_again;

			if (try_again == 0) {

				continue = 0;

			{

			{

		{

	return 0;

{