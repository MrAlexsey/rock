// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	
		int a = 0;
		int b = 0;
		char operation;
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
		cout << "Enter operation: ";
		cin >> operation;

		switch (operation) {
		case '-':
			cout << "a - b = " << a - b << '\n';
			break;
		case '+':
			cout << "a + b = " << a + b << '\n';
			break;
		case '*':
			cout << "a * b = " << a * b << '\n';
			break;
		case '/':
			if ((operation != '/') && (b != 0))
			{
				std::cout << "a / b = " << a / b << '\n';
			}
			else
				cout << "WTF?\n";
			break;
		default:
			cout << "Error\n";
		}

		system("pause");
    return 0;
}

