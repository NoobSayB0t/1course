#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian"); 
    double a, b, c;
    cout << "Введите длины сторон треугольника ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)//проверка существует ли треугольник с такими сторонами
    {
        double p = (a + b + c) / 2;//полупериметр треугольника
        double area = sqrt(p * (p - a) * (p - b) * (p - c));//формула Герона
        cout << "Площадь треугольника: " << area << endl;
    }
    else {
        cout << "Треугольник не существует." << endl;
    }

    return 0;
}
