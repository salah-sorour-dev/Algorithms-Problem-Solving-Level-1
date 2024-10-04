// problem 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;
	cout << "Please Enter Number: \n";
	cin >> N;
	return N;
}

enOddOrEven CheckOddOrEven(int Number)
{
	if ((Number % 2) != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;

}

int SumOddNumbersFromNTo1_UsinWhile(int N)
{
	cout << "Sum Odd Numbers using While Loop \n";
	int i = 1;
	int Sum = 0;
	while (i <= N)
	{
		if (CheckOddOrEven(i) == enOddOrEven::Odd)
		{
			Sum += i;
		}
		i++;
	}
	return Sum;

}

int SumOddNumbersFromNTo1_UsinDoWhile(int N)
{
	cout << "Sum Odd Numbers using Do..While Loop \n";
	int i = 1;
	int Sum = 0;
	do
	{
		i++;
		if (CheckOddOrEven(i) == enOddOrEven::Odd)
		{
			Sum += i;
		}
	} while (i <= N);
	return Sum;

}

int SumOddNumbersFromNTo1_UsinFor(int N)
{
	cout << "Sum Odd Numbers using For Loop \n";
	int Sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (CheckOddOrEven(i) == enOddOrEven::Odd)
		{
			Sum += i;
		}
	}
	return Sum;
}

int main()
{
	int N = ReadNumber();
	cout << SumOddNumbersFromNTo1_UsinWhile(N) << endl;
	cout << SumOddNumbersFromNTo1_UsinDoWhile(N) << endl;
	cout << SumOddNumbersFromNTo1_UsinFor(N) << endl;

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
