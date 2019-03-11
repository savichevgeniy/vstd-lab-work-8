#include "pch.h"
#include <iostream>
#include "Menu.h"
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	system("color 6");
	int key = 0;
	while (key != 5) {
		Menu menu;
		menu.MyMenu();
		std::cin >> key;
		switch (key)
		{
		case 1:
		{
			//Задание №1
			Task1 Result1;
			Result1.ShowTask1();
			break;
		}
		case 2:
		{
			//Задание №2
			Task2 Result2;
			Result2.ShowTask2();
			break;
		}
		case 3:
		{
			//Задание №3
			Task3 Result3;
			Result3.Show();
		}
		break;
		case 4:
			std::cout << "Выход из программы..." << std::endl;
			exit(EXIT_SUCCESS);
			break;
		default:
			std::cerr << "Вы выбрали неверный пункт меню" << std::endl;
		}
		system("pause");
		system("cls");
	}
	return 0;

}
