#include <iostream>
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a = 99;
	const int* const pa = &a;
	// *pa = 33; // нельзя изменять значение по указателю на константу
	// pa = &b; // нельзя изменять константный указатель
	int b = 44;
	cout << "Значение a: " << a << endl; 
	cout << "Значение по указателю pa: " << *pa << endl; 

}