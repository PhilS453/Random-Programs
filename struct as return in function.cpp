#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

//constant for PI
const double PI = 3.14159;

//struct declaration
struct Circle
{
	double radius;
	double diameter;
	double area;
};

//function prototype---return structure stype from function
Circle getInfo();

int main()
{
	Circle c;
	//get data about circle
	c = getInfo();

	//calculate the circles area
	c.area = PI * pow(c.radius, 2.0);

	//display the circle data
	cout << "The radius and area of the circle are:\n";
	cout << fixed << setprecision(3);
	cout << "Radius: " << c.radius << endl;
	cout << "Area: " << c.area << endl;

	system("pause");
	return 0;
}

Circle getInfo()
{
	Circle tempCircle; //Temp struct variable
	//store circle data in the temp variable
	cout << "Enter the diameter of a circle";
	cin >> tempCircle.diameter;
	tempCircle.radius = tempCircle.diameter / 2.0;

	//return the temp strcut back to main
	return tempCircle;
}