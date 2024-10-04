// problem 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float ReadCircumference()
{
	float L;
	cout << "Enter Base of Circle By Circumference: \n";
	cin >> L;
	return L;

}

float CircleAreaByCircumference(float L)
{
	const float P = 3.1415926535897;
	float Area = pow(L, 2) / (P * 4);
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area By Circumference is: " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircumference()));

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
// problem 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

