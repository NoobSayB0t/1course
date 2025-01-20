#include <iostream> 
using namespace std;
void main() {
    setlocale(LC_CTYPE, "Russian");
    int t;
    char charr[60]; 
    float floatu; 
    double doublee; 
    cout << "Введите t= ";
    cin >> t; 
    cout << "Введите double=";
    cin >> doublee;  
    cout << "Введите float=";
    cin >> floatu;  
    cout << "Введите char=";
    cin >> charr; 
    cout << "t=" << t << endl;
    cout << "charc=" << charr << endl; 
    cout << "floats=" << floatu << endl; 
    cout << "double=" << doublee << endl;
    cout << "Тип Размер в байтах" << endl;
    cout << "int: " << sizeof(int) << endl; // определяет размер действительного числа в байтах
    cout << "char: " << sizeof(char) << endl; // определяет размер числа для вывода строки в байтах
    cout << "float: " << sizeof(float) << endl; // определяет размер вещественного числа в байтах
    cout << "double: " << sizeof(double) << endl; // определяет размер числа с плавающей точкой в байтах
}