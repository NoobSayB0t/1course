#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, fact = 1;
	cout << "Введите n: " << endl; 
	cin >> n; 
	for (int i = 1; i <= n; i++) 
	{	
	   fact = fact * i;
	}
	cout << "Факториал = " << fact << endl; 
}
