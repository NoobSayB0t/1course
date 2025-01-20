#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float c = 0.7, d = 0, a, b, sum1 = 0, sum2 = 0;
	int n1 = 6, n2 = 5;   
	for (int i = 1; i <= n1; i++) 
	{  
		cin >> a;
		sum1 += a;  
	}

	for (int i = 1; i <= n2; i++)  
	{
		cin >> b; 
		sum2 += pow(b - 1, 2);  
	}
	d = sum1 - c * sum2;
	cout << "Значение d: " << d;
}
