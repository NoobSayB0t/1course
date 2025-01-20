#include <iostream>
using namespace std;
int main()
{
  setlocale(LC_CTYPE, "Russian");
  int B, p, q, n, m;
  char tmp[33];
  cout << "Введите число B: "; cin >> B;
  cout << "Позиция p (слева): "; cin >> p;
  cout << "Количество битов n: "; cin >> n;
  cout << "Количество битов m: "; cin >> m;
  cout << "Позиция q (в числе B): "; cin >> q;
  int mask1 = ((1 << n) - 1) << p; // выбор n битов из числа A начиная с позиции p
  int bits = (~B & mask1) >> p; // извлечение инверсированных битов
  int mask2 = ~(((1 << m) - 1) << q); // очистка m битов в числе B начиная с позиции q
  B = B & mask2; // очистка m битов в числе B
  B = B | (bits << q); // Вставляем инверсированные биты из числа A в число B 
  _itoa_s(B, tmp, 2);
  cout << "Результат числа B после замены: " << tmp << endl; 
}