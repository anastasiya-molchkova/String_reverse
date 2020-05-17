/* Напишите программу, которая выводит строку, введенную пользователем, задом наперёд.*/

#include <iostream>
#include <Windows.h>  // для кириллицы
#include <string>

int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251); // для возможности вводе и вывода кириллицы

	std::cout << "Программа переворачивает строку, напишите что-нибудь: ";
	std::string users_text;
	getline(std::cin, users_text);
	std::cout << "Результат переворота: ";
	for (int index = users_text.length() - 1; index >= 0; index--)
		std::cout << users_text[index];
	std::cout << std::endl;

	return 0;
}
