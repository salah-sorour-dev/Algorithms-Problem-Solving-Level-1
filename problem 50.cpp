// problem 47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please Enter PIN Code?" << endl;
	cin >> PinCode;
	return PinCode;
}

bool Login()
{
	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1; //whill exit the function and return true
		}
		else
		{
			cout << "\nWrong PIN, you have " << Counter << "more try";
			system("color 4F"); //turn screen to red
		}
	} while (Counter >= 1 && PinCode != "1234");
	return 0; //when you reach here this means login faild
}

int main()
{
	if (Login())
	{
		system("color 2F"); //turn screen to green
		cout << "\nYour account balance is " << 7500 << "\n";
	}
	else
	{
		cout << "\nYour card blocked call the bank for help. \n";
	}

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
