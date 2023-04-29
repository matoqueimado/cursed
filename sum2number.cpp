#include <iostream>



int main() {
	int firstnumber, secondnumber;


	while (1)
	{
		system("cls");
		std::cout << "Put the first number: ";
		std::cin >> firstnumber;
		std::cout << "Put the second number: ";
		std::cin >> secondnumber;

		if (firstnumber == secondnumber && !(firstnumber == 0 || secondnumber == 0) && !(firstnumber == 1 || secondnumber == 1))
		{
			printf("%d + %d = %d\n", firstnumber, secondnumber, firstnumber * 2);
			system("pause");
		}
		else
		{
			printf("%d + %d = %d\n", firstnumber, secondnumber, firstnumber + secondnumber);
			system("pause");
		}
	}




	system("pause");
	return 0;
}
