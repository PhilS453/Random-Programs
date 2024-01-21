#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outputFile;
	int num1, num2, num3;
	outputFile.open("practice.txt");
	cout << "enter a num";
	cin >> num1;
	cout << "another";
	cin >> num2;
	cout << "another";
	cin >> num3;
	outputFile << num1 << endl;
	outputFile << num2 << endl;
	outputFile << num3 << endl;
//	cout << "nums were saved to the file \n";
	outputFile.close();
	cout << "Done.\n";
	return 0;
}