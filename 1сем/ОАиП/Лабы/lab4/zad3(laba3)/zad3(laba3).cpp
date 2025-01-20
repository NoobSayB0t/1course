#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	double s, t, x, j, y;
	printf("\tВведите x=\n");
	scanf_s("%lf", &x);
	printf("\tВведите j=\n");
	scanf_s("%lf", &j);
	printf("\tВведите y=\n");
	scanf_s("%lf", &y);
	s = 0.4 * x - 1 / j * tan(y);
	t = s - sin(s);
	printf("s=%f\n", s);
	printf("t=%f\n", t);
}