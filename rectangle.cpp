#include "rectangle.h"

int main()
{
	rectangle box;
	double rectwidth;
	double rectlength;
	std :: cout  << "enter width: \n";
	std::cin >> rectwidth;
	std::cout << "enter length: \n";
	std::cin >> rectlength;
	box.setWidth(rectwidth);
	box.setLength(rectlength);
	std :: cout << "WIDTH: " << box.getWidth() << std :: endl;
	std :: cout << "Length: " << box.getLength() << std :: endl;
	std :: cout << "Area: " << box.getArea() << std :: endl;

	system("pause");
	return 0;
}