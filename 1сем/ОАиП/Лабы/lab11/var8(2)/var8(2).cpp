#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, n, m;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	cout << "Введите позицию n (извлечение из A): ";
	cin >> n;
	cout << "Введите позицию m (вставка в B): ";
	cin >> m;
	int maskA = 0b111 << n; // Создаем маску для выделения 3 бит из числа A, начиная с позиции n
	int threeBits = (A & maskA) >> n; // Извлекаем 3 бита из числа A 
	int maskB = ~(0b111 << m); // Создаем маску для очистки 3 бит в числе B, начиная с позиции m
	int rezB = (B & maskB) | (threeBits << m);   
	_itoa_s(A, tmp, 2); 
	cout << "A в двоичном виде: " << tmp << endl;  
	_itoa_s(B, tmp, 2); 
	cout << "B в двоичном виде: " << tmp << endl;
	_itoa_s(maskA, tmp, 2); 
	cout << "Маска для A: " << tmp << endl; 
	_itoa_s(threeBits, tmp, 2);  
	cout << "Извлеченные биты: " << tmp << endl;   
	_itoa_s(maskB, tmp, 2); 
	cout << "Маска для B: " << tmp << endl;  
	_itoa_s(rezB, tmp, 2); 
	cout << "Результат B: " << tmp << endl;  
}