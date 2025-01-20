#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    // задаём значения каждого x
	int x1 = 1;
	int x2 = 6.7;
	int x3 = 4; 
	int x4 = 6; 
	int x5 = 17;  
    int z = 2 + x1; 
    // нахождения минимального значение z
    if (2 + x1 < z) z = 2 + x1;  
    if (2 + x2 < z) z = 2 + x2;  
    if (2 + x3 < z) z = 2 + x3;  
    if (2 + x4 < z) z = 2 + x4;  
    if (2 + x5 < z) z = 2 + x5;
    // вычисляем для i от 1 до 5 + z
    int y = z + pow(x1, 2) + pow(x2, 2) + pow(x3, 2) + pow(x4, 2) + pow(x5, 2); 
    cout << "Значение z: " << z << endl;
    cout << "Значение y: " << y << endl;
}
