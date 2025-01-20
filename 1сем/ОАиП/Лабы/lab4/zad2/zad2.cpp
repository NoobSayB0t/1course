#include <iomanip>
#include <iostream>
void main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    char c, probel;
    probel = ' ';
    float f;
    int j;
    cout << "Введите символ: ";
    cin >> c;
    cout << setw(35);
    cout << setw(35) << setfill(probel) << probel;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(34) << setfill(probel) << probel;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(33) << setfill(probel) << probel;
    cout << setw(14) << setfill(c) << c << endl;
    cout << "Введите число в 8 системе счисления" << endl;
    cin >> hex >> j;
    cout << setw(5) << setfill(probel) << dec << j << endl;
    cout << "Введите дробное число в 16 системе счисления" << endl;
    cin >> oct >> f; 
    cout << setw(10) << setfill('*') << f << endl;
}