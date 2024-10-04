// problem 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	string firstName;
	string lastName;
};

stInfo ReadInfo() {
	stInfo info;
	cout << "enter your first name: \n";
	cin >> info.firstName;
	cout << "enter your lastName: \n";
	cin >> info.lastName;

	return info;
}

string GetFullName(stInfo info, bool Reverse)
{
	string FullName = "";
	if(Reverse)
		FullName = info.lastName + " " + info.firstName;
	else
		FullName = info.firstName + " " + info.lastName;
	return FullName;

}

void PrintFulName(string FullName)
{
	cout << "your FullName is: " << FullName;
}

int main()
{

	PrintFulName(GetFullName(ReadInfo(), true));
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
