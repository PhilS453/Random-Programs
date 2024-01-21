//this will show the logic behind pointers and how to use them with arrays
#include <iostream>
#include <iomanip>
using namespace std;
//void print_array_pointer(int z[]);
int main() {
	/*this will print the memory address and not the value that is held there.
	int x=10;
	int* p1, * p2;
	p1 = &x;
	p2 = p1;
//	cout << p2;*/
//	/*this shows how to use a pointer to print the value that is stored at x*/
//	int x = 10;
//	int* p1;
//	p1 = &x;
//	cout << *p1;
//	return 0;
//}
	/*	this shows how to use a pointer when referencing a list
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &x[0];
	for (int i = 0; i < 10; i++) {
		if (p[i] == 6) {
			p[i] = 10;
		}
		cout << x[i] << endl;
	}*/
//	int x[5] = { 1,2,3,4,5 };
//	print_array_pointer(x);
//	return 0;
//}
//void print_array_pointer(int z[]) {
//	int t;
//	int* p;
//	p = &z[0];
//	for (t = 0; t < 5; t++)
//		cout << setw(5)<<  p[t];
//}