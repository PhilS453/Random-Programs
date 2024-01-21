#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct student
{
	int Id;
	char Name[30] = {};
};

int main()
{
	student stu[] = {
		{10005,"John Anderson"},
		{10003,"Cameron Bok"},
		{10009,"Alberta Ethan"},
		{10001,"Darwin Holswrothy"},
		{10002,"Josephine Jefferson"},
		{10004,"Curtis McDonald"},
		{10006,"Matthew Truman"},
		{10008,"Alan Bloomberg"},
		{10000,"Stephen Bruno"}
	};
	cout << stu[0].Id;
	return 0;
}