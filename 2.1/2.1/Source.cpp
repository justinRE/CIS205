#include<iostream>
using namespace std;

int main()
{
	double length, width, area;

	cout << "Enter the length of the rectangle:";
	cin >> length;

	cout << "Enter width of rectangle:";
	cin >> width;

	area = length * width;

	cout << "The area is: " << area << " Units squared" << endl //can also use \n after Units squared

	return 0;
	/* 
	This program calculates 
	The area of a rectangle
	inputs are length/width
	*/

}