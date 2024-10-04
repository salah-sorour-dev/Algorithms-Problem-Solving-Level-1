// problem 41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberInRange("Please Enter Month Number Between 1 and 12 ? ", 1, 7);
}

string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::Jan:
		return "January ";
	case enMonthOfYear::Feb:
		return "February";
	case enMonthOfYear::Mar:
		return "March";
	case enMonthOfYear::Apr:
		return "April ";
	case enMonthOfYear::May:
		return "May ";
	case enMonthOfYear::Jun:
		return "June ";
	case enMonthOfYear::Jul:
		return "July ";
	case enMonthOfYear::Aug:
		return "August ";
	case enMonthOfYear::Sep:
		return "September ";
	case enMonthOfYear::Oct:
		return "October ";
	case enMonthOfYear::Nov:
		return "November ";
	case enMonthOfYear::Dec:
		return "December ";
	default:
		return "Not a valid Month!";
	}
}



int main()
{
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
