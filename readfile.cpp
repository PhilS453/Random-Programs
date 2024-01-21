#include <iostream>
#include <fstream>
using namespace std;
ifstream inputvar;
ofstream outputvar;
void even_display(int evens, int zeros);
void average_of_file(int sum, int total_nums);
void Odd_Display(int odds);
int main() {
	int num, zero = 0, even = 0, odd = 0, sum = 0, num_counter = 0;
	inputvar.open("Data.txt");
	outputvar.open("output.txt");
	if (inputvar.fail()) {
		cout << "could not open the file\n";
	}
	else {
		while (inputvar >> num) {
			outputvar << num << " ";
			sum = sum + num;
			num_counter = num_counter + 1;
			if (num_counter % 10 == 0) {
				outputvar << endl;
			}
			if (num == 0) {
				zero = zero + 1;
			}
			else if (num % 2 == 0) {
				even = even + 1;
			}
			else {
				odd = odd + 1;
			}
		}
	}
	even_display(even, zero);
	Odd_Display(odd);
	//division by 0 cannot happen, if the file does not have data this line will not execute.
	if (num_counter != 0) {
		average_of_file(sum, num_counter);
	}
	//always close the files after
	inputvar.close();
	inputvar.close();

	return 0;

}

void even_display(int evens, int zeros) {
	outputvar << "\nThere are " << (evens + zeros) << " evens, "
		<< "which include " << zeros << " zeros";
}
void Odd_Display(int odds) {
	outputvar << "\nTotal number of odds are: " << odds;
}
void average_of_file(int sum, int total_nums) {
	int average = sum / total_nums;
	outputvar << "\nThe sum of numbers = " << sum << endl;
	outputvar << "The average is " << static_cast<int>(average);
}