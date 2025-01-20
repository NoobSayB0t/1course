#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    float a, sum = 0, proizvd = 1;
    const int size = 4;
    for (int i = 0; i < size; i++)
    {
        cout << "Введите a" << endl;
        cin >> a;
        sum += a * a;
        proizvd *= a;
    }

    cout << "Сумма квадратов: " << sum << endl;
    cout << "Произведение: " << proizvd << endl;
}