#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int A;
    cout << "Число A: ";
    cin >> A;
    char tmp[33];
    _itoa_s(A, tmp, 2);
    cout << "Число A в двоичном виде: " << tmp << endl;
    int bits = 0, ones = 0, zeros = 0;
    int foundingBit = 0; 
    for (int i = 31; i >= 0; --i) { // переход от старшего бита к младшему(всего 32 бита (от 0 до 31))
        if (A & (1 << i)) {         // проверка, установлен ли текущий бит
            foundingBit = 1;
            ones++;
        }
        else if (foundingBit) {      // учитываем нули только в значащих битах
            zeros++;
        }
    }
    int diff = ones - zeros; // разница между 1 и 0
    cout << "Количество единиц в значащих битах: " << ones << endl;
    cout << "Количество нулей в значащих битах: " << zeros << endl;
    cout << "Разница (единицы - нули): " << diff << endl;

}