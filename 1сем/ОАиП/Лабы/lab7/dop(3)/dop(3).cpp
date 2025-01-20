#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double sosud1, sosud2;
	cout << "Введите sosud1 и sosud2:" << endl;
	cin >> sosud1 >> sosud2; 
	for (int i = 0; i != 6; i++) {
		sosud2 += sosud1 / 2;  
		sosud1 /= 2; 
		sosud1 += sosud2 / 2; 
		sosud2 /= 2; 
	}
	cout << "V s1=" << sosud1 << " V s2=" << sosud2 << endl;  
}
