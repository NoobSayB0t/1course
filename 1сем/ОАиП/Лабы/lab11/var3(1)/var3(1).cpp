#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int A;
    char tmp[33];
    cout << "Введите число A: ";
    cin >> A;
    int mask1 = ((1 << 15) - 1) ^ ((1 << 2) - 1); // биты = 1(с 2 по 14)
    int result = A ^ mask1; // инверсия
    _itoa_s(A, tmp, 2); 
    cout << "Число A в двоичном виде: " << tmp << endl;
    _itoa_s(result, tmp, 2);
    cout << "Результат после инверсии битов с 2 по 14: " << tmp << endl;
}