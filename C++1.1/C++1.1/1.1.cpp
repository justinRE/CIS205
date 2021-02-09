#include<iostream>

using namespace std;
//Justin Reisz
/*
* This program is to calculate the gross pay of an employee
* CS class
*/
int main()
{
	double hours, rate, Gross; //Declaring variables

	cout << "How many hours did you work? "; //Asking for Hours worked
	cin >> hours;

	cout << "How much is your hourly rate? ";
	cin >> rate;

	Gross = hours * rate;

	cout << "The Gross pay is:" << Gross << endl;

	char x;

	cout << "Press Enter to exit";
	x = cin.get();

	return 0;
}