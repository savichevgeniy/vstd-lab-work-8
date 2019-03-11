#pragma once
#include "pch.h"
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <string> 
#include "windows.h"

using namespace std;

class Task1
{
private: 
	string MyString;
	char size;


	void CkeckString()
	{
		if (Check())
			cout << "В введенной строке есть число" << endl;
		else
			cout << "В введенной строке чисел нет" << endl;
	}
	
	bool Check()
	{
		for (int i = 0; i < MyString.length(); i++)
		{
			if (isdigit(static_cast<unsigned char>(MyString[i])) > 0)
				return true;
		}
		return false;
	}

	void PrintString()
	{

		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		cout << "Введите строку: " << endl;
		getchar();
		getline(cin, MyString, '\n');
		CkeckString();
	}

public:
	void ShowTask1()
	{
		PrintString();
	}

};
