#pragma once
#include <iostream>

using namespace std;

class Task3
{
private: 
	char MyString[10];


		bool CkeckString(const std::string& n) {
			int i = 0;
			bool dot = false;

			while (i < n.size()) {
				if ((n[i] == '.') && !dot) {
					dot = true;
				}
				else if ((n[i] < '0') || (n[i] > '9')) {
					return false;
				}
				i++;
			}

			return true;
		}

	void PrintString()
	{

		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		puts("������� ������: "); cin >> MyString;
		
		if (CkeckString(MyString))
		{
			cout << "������ - ����� �����" << endl;
		}
		else
		{
			cout << "������ �� �������� ����� ������" << endl;
		}
	}

public:
	void Show()
	{
		PrintString();
	}

};