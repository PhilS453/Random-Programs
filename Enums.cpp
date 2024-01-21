#include<iostream>
#include<string>

using namespace std;

int  main() {
	enum change { penny = 1, dime = 10 };
	char p;
	cin >> p;
	switch (p) {
	case 'P' || 'p':
		cout << penny;
	}
	cout << penny << endl << dime;
	int i = 1;
	return 0;
}