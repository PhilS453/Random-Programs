//This program will organize a data base to allow for quick searching. This program can be easily edited to allow any number of linked arrays to be sorted.
//less typing with iostream included
#include <iostream>
//needed to manip one section easily
#include <iomanip>
//using strings 
#include <string>
//instead of std::... less typing is good
using namespace std;
//function prototypes... i prefer seeing everything in the function as opposed to just the data types but i am comfortable following a program that only has data types here
void PrintNames(int ID[],string names[],const int SIZE);
int searchLinear(int array[], const int SIZE, int item);
int sortList_BinarySearch(int listID[], string names[], const int SIZE, string& name);
void Sort_List(int ID[], string names[], const int SIZE);
void Menu_List();
int main()
{
	//linked arrays that were provided... could be changed to an infile data type of data
	int listID[10] = { 10005,10003,10009,10001,10002,
			10007,10004,10006,10008,10000 };
	string listName[10] = { "John Anderson","Carmen Bok","Ann Chang","Alberta Ethan",
						"Darwin Holsworthy","Josephine Jefferson","Curtis McDonald",
						"Matthew Truman","Alan Bloomberg","Stephen Bruno" };
	//const int because the size is known this time
	const int SIZE = 10;
	//variable to allow user to search based on ID number
	int ID_num;
	//sentinel variable? because q has to be entered for the program to quit
	string user_response;
	//var to allow user to search the database by name
	string search_name;
	//i think its imporant to always sort the data first... then you have every search algorithm at your disposal
	Sort_List(listID,listName,SIZE);
	//void function to display menu
	Menu_List();
	//first response q will exit program.
	cin >> user_response;
	while (user_response != "q")
	{
		if (user_response == "1")
		{
			cout << "Enter a student ID you wish to search for in the database :\n";
			cin >> ID_num;
			//"local" variable that catches the position from the function... it is local to main.. but also "local" or only used inside this block of the if statement
			int pos = searchLinear(listID, SIZE, ID_num);
			//catch an invalid student id number or a valid id number that is not in the database
			if (pos == 0) {
				cout << "Student not found " << endl;
			}
			else {
				cout << "Found the student in row number: " <<pos << endl;
				PrintNames(listID, listName, SIZE);
				//allows the user to control when the program continues
				system("pause");
			}
		}
		else if (user_response == "2")
		{
			cout << "enter a name or q to exit menu 2: " << endl;
			//found that you must initiate ignore to make the getline function to work properly
			cin.ignore(100, '\n');
			getline(cin, search_name);
			//catch the location from the binary search... only used inside this else if statement
			int location = sortList_BinarySearch(listID, listName, SIZE, search_name);
			//similiar to earlier  catches invalid name or user not in database
			if (location == 0)
			{
				cout << "Student not found, student name is case sensitive " << endl;
			}
			else
			{
				cout << "Found the student at row number: " << location << endl;
				PrintNames(listID, listName, SIZE);
				cout << endl;
				system("pause");
				
			}
		}
		else if (user_response == "3")
		{

			PrintNames(listID, listName, SIZE);
			cout << endl;
			system("pause");
		}
		else
			cout << "INVALID MENU NUMBER PLEASE TRY AGAIN\n";
		Menu_List();
		//at the end, the user can exit the list  or continue
		cin >> user_response;

	}




	return 0;
}
// prints names... had to force the 10th student into proper position for neat display
void PrintNames(int ID[],string names[],const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		if (i == 9) {
			cout << (i + 1) << ")" << ID[i] << setw(21) << names[i];

		}
		else {
			cout << (i + 1) << ")" << ID[i] << "\t\t";
			cout << names[i] << endl;
		}
	}
}
//standard linear search... does not need a sorted list
int searchLinear(int array[], const int SIZE, int item) {
	int location = -1;
	int index = 0;
	bool found = false;
	while (index < SIZE && !found)
	{
		if (array[index] == item)
		{
			found = true;
			location = index;
		}
		index++;
	}
	return location+1;
}
//sorts the list alphabetically... can be changed to sort anyway user wants
//this can keep any dimension parralel array aligned.
void Sort_List(int ID[], string names[], const int SIZE)
{
	int minIndex;
	string minValue;
	for (int start = 0; start < (SIZE - 1); start++)
	{
		minIndex = start;
		minValue = names[start];
		for (int index = start + 1; index < SIZE; index++)
		{
			if (names[index] < minValue)
			{
				minValue = names[index];
				minIndex = index;
			}
		}
		//when swapping for alphabetical sort...can also swap any other parallel array tied into the alphabetical list right here to keep indexes aligned
		//1 sort to rule them all
		swap(names[minIndex], names[start]);
		swap(ID[minIndex], ID[start]);
	}
}


//standard binary search.. since list is sorted when program runs.. this will run without a problem
int sortList_BinarySearch(int ID[], string names[], const int SIZE, string& name)
{
	int first = 0, last = (SIZE - 1), middle, location = -1;
	bool found = false;
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (names[middle] == name)
		{
			found = true;
			location = middle;

		}
		else if (names[middle] > name)
			last = middle - 1;
		else
			first = middle + 1;
	}
	//wanted the return number to correspond with either 0 for not found, or the actual number of the location instead of starting at 0
	return location + 1;
}
//menu list diplay
void Menu_List() {
	cout << "Welcome!\nEnter q to exit or Enter the menu option(1-3) you wish to use: " << endl;
	cout << "Enter 1:Search for a student by ID" << endl;
	cout << "Enter 2:Search for student by full name" << endl;
	cout << "Enter 3:See a list of studnets" << endl;
}



//written by Phil Seros



