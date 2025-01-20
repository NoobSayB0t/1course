#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	int n, i, j;
	printf("Enter n: ");
	scanf_s("%d", &n);
	cout << endl;
	cout << " " << setw(5 * n) << setfill('-') << '-' << endl;
	for (i = 1; i <= n; i++)
	{
		printf("|");
		for (j = 1; j <= n; j++)
			printf("%5d", i * j);
		printf("|");
		if (i == 1)
		{
			cout << endl;
			cout << " " << setw(5 * n) << setfill('-') << '-';
		}
		printf("\n");
		if (i == n)
		{
			cout << " " << setw(5 * n) << setfill('-') << '-' << endl;
		}
	}
}
