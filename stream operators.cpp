#include <iostream>
#include <iomanip> //needed for manips
using namespace std;

int main() {
/*Set precision MANIPULATOR
	double precision = 8.45678;
	//rounds based off 3rd decimal point
		cout << setprecision(3) << precision;*/
/*fixed manip to 7 total numbers
	double FIXED = 5.444;
	obviously scientific notation
	float science = 456789123;
	cout << scientific << science;

	setw(n) can be used to organize data ex.
	123456789
	setw(5)... num is 34
	000340000... false's arent not shown in output
	using setfill('#') will fill the white spaces same ex.
	###34####
	*/
	double cost = 20.0;
	double area = 4;
	double bagsize = 10;
	cout << fixed << showpoint << setprecision(2);
	cout << "bagsize lbs...cost usd...area ft*ft..";
	cout << (cost / bagsize);


















	return 0;
}






















