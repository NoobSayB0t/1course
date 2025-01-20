#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char tmp[33]; 
    int A, mask = 0x92492492; // маска для сброса каждого третьего бита
    cout << "Введите число A: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "A (исходное) = " << tmp << endl;
    A = A & ~mask;
    _itoa_s(A, tmp, 2);
    cout << "A (обнуление каждого третьего бита) = " << tmp << endl;
}