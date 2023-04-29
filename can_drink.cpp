#include <iostream>


int main() {
	
	int age, thisyear;
	bool can_drink;
	std::string can_drinke;

	while (1)
	{
	system("cls");
	std::cout << "Wich year is it? ";
	std::cin >> thisyear;
	std::cout << "What is your age? ";
	std::cin >> age;
	std::cout << "\n\n";

	if (thisyear <= 2023 || thisyear >= 2023 && !(thisyear == 2030 || thisyear > 2030)) {
		can_drink = false;

		if (can_drink == true)
		{
			can_drinke = "can";
		}
		else
		{
			can_drinke = "can't";
		}

		if (age > 25)
		{
			std::cout << "Go home buddy, you old lol\n";
			system("pause");
		}
		else if (age >= 18)
		{
			std::cout << "You are in time to drink.\n";
			system("pause");
		}
		else if (age < 18)
		{
	
				std::cout << "You " << can_drinke << " drink\n";
				system("pause");
			
		}
	}
	else
	{
		can_drink = true;

		if (can_drink == true)
		{
			can_drinke = "can";
		}
		else
		{
			can_drinke = "can't";
		}

		if (age > 25)
		{
			std::cout << "Go home buddy, you old lol\n";
			system("pause");
		}
		else if (age >= 18)
		{
			std::cout << "You are in time to drink.\n";
			system("pause");
		}
		else if (age < 18)
		{

			std::cout << "You " << can_drinke << " drink\n";
			system("pause");

		}

	}
	
		
	}
	



	system("pause");
	return 0;
}
