#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h> 


using namespace std;

class Task2
{
private:
	char buf[1000];
	char string[1000];
	int i = 0;

	void OpenFile()
	{
		ifstream MyFile("D:\\Предметы\\ВСРПП\\Lab8\\MyFile.txt");

		if (!MyFile)
		{
			cout << "Не удалось открыть файл" << endl;
		}
		else
		{
			cout << "Файл открыт:" << endl;
			MyFile.getline(buf,1000);
			cout << "\t" << buf << endl;
		}
		MyFile.close();
	}
	
	
	void Operation()
	{
		char  Text[37] = "(каждая с определенной длиной волны)";
		char *cur = buf;
		char *res = string;

		int count = 0;

		while (*cur) {
			count += (*cur == '(');
			if (!count) 
				*res = *cur, res++;
			count -= (*cur == ')');
			count = max(count,0);
			cur++;
		}
		*res = 0;
		cout << string << Text << endl;
	
	}

public:
	void ShowTask2()
	{
		OpenFile();
		
		cout << "Преобразованный текст:" << endl;

		Operation();
	
	}

};
