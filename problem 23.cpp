// problem 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{

	cout << "Enter A: \n";
	cin >> A;
	cout << "Enter B: \n";
	cin >> B;
	cout << "Enter C: \n";
	cin >> C;

}

float CircleAreaByATriangle(float A, float B, float C)
{
	const float PI = 3.1415926535897;
	float p = (A + B + C) / 2;
	float T = (A * B * C) / ( 4 * sqrt(p * (p-A) * (p-B) * (p-C) ));
	float Area = PI * pow(T, 2);
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area By A Triangle is: " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintResult(CircleAreaByATriangle(A, B, C));

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

