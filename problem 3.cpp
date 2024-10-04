// problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum ennumberType { odd = 1, even = 2 };

int readNumber() {
	int num;
	cout << "enter number: ";
	cin >> num;
	return num;
}

ennumberType checkNumberType(int num) {
	int result = num % 2;
	if (result == 0)
	{
		return ennumberType::even;
	}
	else {
		return ennumberType::odd;
	}
}

void printNumberType(ennumberType numberType) {
	if (numberType == ennumberType::even) {
		cout << "\n Number is Even \n";
	}
	else
	{
		cout << "\n Number is Odd \n" << endl;

	};
}

int main()
{
	printNumberType(checkNumberType(readNumber()));
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
