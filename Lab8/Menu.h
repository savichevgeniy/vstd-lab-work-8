#include <iostream>

using namespace std;

class Menu
{
public:
	void MyMenu()
	{
		cout << "Выберите задание\n";
		cout << "1. Задание №1\n";
		cout << "2. Задание №2\n";
		cout << "3. Задание №3\n";
		cout << "4. Выход\n" << std::endl;
		cout << ">>> ";
	}
};
