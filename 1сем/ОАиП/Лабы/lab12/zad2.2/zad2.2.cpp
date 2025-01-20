#include <iostream>
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a = 99;
	int b = 44; 
	int* const pa = &a; // pa = &b; // нельзя изменять константный указатель
	*pa = 12; // изменять значение по указателю можно
	cout << "Значение a после изменения: " << a << endl; 
	cout << "Значение по указателю pa: " << *pa << endl; 
}