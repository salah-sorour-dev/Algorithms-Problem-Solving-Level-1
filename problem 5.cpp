// problem 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	int Age;
	bool HasDrivingLicence;
	bool hasWasta;
};

stInfo readInfo() {
	stInfo info;

	cout << "enter Age: \n";
	cin >> info.Age;

	cout << "do you have Driving Licence: \n";
	cin >> info.HasDrivingLicence;

	cout << "do you have Wasta \n";
	cin >> info.hasWasta;

	return info;
}

bool isAcceptInfo(stInfo info) {
	if (info.hasWasta)
	{
		return true;
	}
	else {
		return (info.Age > 21 && info.HasDrivingLicence);
	}
}

void printResult(stInfo info) {
	if (isAcceptInfo(info))
	{
		cout << "Hired \n";
	}
	else {
		cout << "Rejected \n";
	}
}

int main()
{
	printResult(readInfo());

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
