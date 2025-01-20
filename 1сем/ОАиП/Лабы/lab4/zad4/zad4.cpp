#include <windows.h>
#include <stdio.h>
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60], yd[40], pov[100];  
	puts("Как вас зовут? ");
	gets_s(name);
	printf("Привет, %s\n", name);
	puts("Как у тебя дела?");
	gets_s(yd);   
	puts("Дела идут в гору!");
	gets_s(pov);   
}

