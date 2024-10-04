// problem 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Number 1: \n";
	cin >> Num1;
	cout << "Please Numbers 2: \n";
	cin >> Num2;
}

int MaxOfTwoNumbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintMax(int Max)
{
	cout << "The Maximum Number is: " << Max;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintMax(MaxOfTwoNumbers(Num1, Num2));

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
