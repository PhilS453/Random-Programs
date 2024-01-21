/*This program will read in a file of integers. It will count the amounts of input, calculate the average,
and inform the user how many zeros, evens, and odds are present by writing onto a new file*/
#include<iostream>
#include<fstream>
using namespace std;
//prototypes to let the compiler recognize these functions when they are called
void Even_Display(int, int);
void Odd_Display(int);
void average_of_file(int, int);
void sum_of_file(int number, int& sum);
void EVEN_ODD_ZERO(int number, int& even, int& odd, int& zero);
//need i/o variable declared to read and write to a file.
ifstream inputFile;
ofstream outputFile;
int main() {
	//variables that will be used
	int num, zero = 0, even = 0, odd = 0, sum = 0, num_counter = 0;
	/*enter the location of the file inside the parenthesis
	for output enter the file you would like to overwrite or create*/
	inputFile.open("Data.txt");
	outputFile.open("C:\\output.txt");
	//if the file cannot open this message will be displayed
	if (inputFile.fail()) {
		cout << "error opening the file";
	}
	else {
		while (inputFile >> num) {
			//the following line organizes the output to the file
			outputFile << num << " ";
			sum_of_file(num, sum);

			num_counter = num_counter + 1;
			//needs to be in 10 in a row...every 10 nums the cursors moves to next line
			if ((num_counter % 10 == 0)) {
				outputFile << endl;
			}
			EVEN_ODD_ZERO(num, even, odd, zero);
		}
		Even_Display(even, zero);
		Odd_Display(odd);
		//division by 0 cannot happen, if the file does not have data this line will not execute.
		if (num_counter != 0) {
			average_of_file(sum, num_counter);
		}
	}
	//always close the files after
	inputFile.close();
	outputFile.close();

	return 0;
}
//this functioin accepts by value parameters and writes to the file
void Even_Display(int even_num, int zero_count) {
	outputFile << "\nThere are " << (even_num + zero_count) << " evens, "
		<< "which include " << zero_count << " zeros";

}
//this function accepts by value paramters and write to the file
void Odd_Display(int odd_num) {
	outputFile << "\nTotal number of odds are: " << odd_num;
}
//this function accepts by value paramters,calculates and writes to the file.
void average_of_file(int sum, int total_nums) {
	int average = sum / total_nums;
	outputFile << "\nThe sum of numbers = " << sum << endl;
	outputFile << "The average is " << static_cast<int>(average);
}
/*accpets the file input and by reference parameter
* the sum in function main will continue to change until done*/
void sum_of_file(int number, int& sum) {
	sum = sum + number;
}
/*acccepts file input and 3 reference parameters
* by the end the variables in main will be updated */
void EVEN_ODD_ZERO(int number, int& even, int& odd, int& zero) {
	if (number == 0) {
		zero = zero + 1;
	}
	else if (number % 2 == 0) {
		even = even + 1;
	}
	else {
		odd = odd + 1;
	}
}




// Written by Phil Seros