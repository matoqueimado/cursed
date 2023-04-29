#include <iostream>
#include <Windows.h>




int main() {
	
	bool is_not = false;
	std::string me = "you";
	std::string you = me;
	std::string hello = "World";
	std::string world = "Hello";
	std::string Not = "not";
	char espace[] = " \0";

	is_not = true;
	if (is_not != true)
	{
		std::cout << world << espace << hello << ", " << me << " are " << Not << "awesome" << "\n";
	}
	else
	{
		std::cout << world << espace << hello << ", " << me << " are " << " awesome" << "\n";
	}

	




	system("pause");
	return 0;
}
