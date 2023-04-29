#include <iostream>
#include <Windows.h>



void frame1() {
	printf("---->");
	return;
}

void frame2() {
	printf("     ---->");
	return;
}

void frame3() {
	printf("         ---->");
	return;
}

void frame4() {
	printf("				---->");
	return;
}

void frame5() {
	printf("							---->");
	return;
}

void frame6() {
	printf("					   		                   ---->    O\n");
	printf("										  \\-|-/\n");
	printf("										    |\n");
	printf("                                                                                   / \\\n");
	return;
}

void frame7() {
	printf("					   		                       ---->O\n");
	printf("										  \\-|-/\n");
	printf("										    |\n");
	printf("                                                                                   / \\\n");
	return;
}

void frame8() {
	printf("					   		                           ---->O\n");
	printf("										  \\-|-/\n");
	printf("										    |\n");
	printf("                                                                                   / \\\n");
	return;
}

void frame9() {
	printf("					   		                                    ---->O\n");
	printf("										  \\-|-/\n");
	printf("										    |\n");
	printf("                                                                                   / \\\n");
	return;
}

void frame10() {
	printf("					   		                                             ---->O\n");
	printf("										  \\-|-/\n");
	printf("										    |\n");
	printf("                                                                                   / \\\n");
	return;
}




int main() {
	
	
	int thisyear = 2023; //change in 2024
	SetConsoleTitleA("0.1 + 0.2 = 0.300000001");


	printf("This movie is from %d", thisyear);
	Sleep(1000);
	system("cls");
	frame1();
	Sleep(80);
	system("cls");
	frame2();
	Sleep(80);
	system("cls");
	frame3();
	Sleep(80);
	system("cls");
	frame4();
	Sleep(80);
	system("cls");
	frame5();
	Sleep(80);
	system("cls");
	frame6();
	Sleep(80);
	system("cls");
	frame7();
	Sleep(80);
	system("cls");
	frame8();
	Sleep(80);
	system("cls");
	frame9();
	Sleep(80);
	system("cls");
	frame10();
	Sleep(100);


	std::cout << "\nHe died. \nThe end\n";

	



	system("pause");
	return 0;
}
