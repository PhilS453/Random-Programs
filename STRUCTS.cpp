//#include <iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//struct InventoryItem
//{
//	int partNum;
//	string description;
//	int onHand;
//	double price;
//};
//
//void GetItem(InventoryItem&); //by value
//void showItem(const InventoryItem); //by reference
//int main()
//{
//	InventoryItem part;
//
//	GetItem(part);
//	showItem(part);
//
//	system("pause");
//
//	return 0;
//}
//void GetItem(InventoryItem& p)
//{
//	//get part number
//	cout << "enter the part number: ";
//	cin >> p.partNum;
//
//	//get the part description
//	cout << "Enter the part description: ";
//	cin.ignore(); // ignore remaining newline character
//	getline(cin, p.description);
//
//	//get the quantity on hand
//	cout << "enter the quantity on hand: ";
//	cin >> p.onHand;
//
//	//get the unit price
//	cout << "Enter the unit price: ";
//	cin >> p.price;
//}
////USE CONST SO DATA ISNT CHANGED ONLY ACCESSSED
//void showItem(const InventoryItem p)
//{
//	cout << fixed << showpoint << setprecision(2);
//	cout << "Part Number: " << p.partNum << endl;
//	cout << "Description: " << p.description << endl;
//	cout << "Units On Hand: " << p.onHand << endl;
//	cout << "Price: $" << p.price << endl;
//}
