// problem 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Please Enter Number: \n";
	cin >> N;
	return N;
}

void PrintRangeFromNTo1_UsinWhile(int N)
{
	cout << "Range Printed by While Loop \n";
	int i = N + 1;
	while (i > 1)
	{
		i--;
		cout << i << endl;
	}

}

void PrintRangeFromNTo1_UsinDoWhile(int N)
{
	cout << "Range Printed by Do..While Loop \n";
	int i = N + 1;
	do
	{
		i--;
		cout << i << endl;
	} while (i > 1);
}

void PrintRangeFromNTo1_UsinFor(int N)
{
	cout << "Range Printed by For Loop \n";
	for (int i = N; i >= 1; i--)
	{
		cout << i << endl;
	}
}

int main()
{
	int N = ReadNumber();
	PrintRangeFromNTo1_UsinWhile(N);
	PrintRangeFromNTo1_UsinDoWhile(N);
	PrintRangeFromNTo1_UsinFor(N);

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
