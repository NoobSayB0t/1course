#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int way = 0;
	for (int a = 0; a <= 2; a++) {
	for (int b = 0; b <= 4; b++) {
	for (int c = 0; c <= 20; c++) {
	for (int d = 0; d <= 50; d++) {
	if ((a * 50 + b * 20 + c * 5 + d * 2) == 100) {
		way++;
	    }
	   }
	  }
	 }
	}
	cout << "Способов набора существует:" << way << endl;
}