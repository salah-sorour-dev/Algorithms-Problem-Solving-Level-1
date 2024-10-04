// problem 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter Number 1: \n";
	cin >> Num1;
	cout << "Please enter Number 2: \n";
	cin >> Num2;
	cout << "Please enter Number 3: \n";
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

float CalculateAverage(int Num1, int Num2, int Num3)
{
	return (float)SumOf3Numbers(Num1, Num2, Num3) / 3;
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Average)
{
	cout << "the Average Of Numbers is: " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "You Passed \n";
	else
		cout << "You Faild \n";
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResult(CalculateAverage(Num1, Num2, Num3));

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
