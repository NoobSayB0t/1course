﻿#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, mn, mx;
	cout << "Введите x=";
	cin >> x;
	cout << "Введите y=";
	cin >> y;
	cout << "Введите z=";
	cin >> z;
	if ((x + y + z) < (x * y * z))
		mx = (x * y * z);
	else
		mx = (x + y + z);
	mn = x;
	if (mn > y) mn = y;
	if (mn > z) mn = z;
	cout << "max(x + y + z, xyz) * min(x, y, z)= " << mx * mn;
}
