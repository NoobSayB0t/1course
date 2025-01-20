#include <iostream>//подключение библиотеки
using namespace std;

int main()//объ€вление функции
{
    setlocale(LC_CTYPE, "Russian");//дл€ использовани€ кириллицы
    double a, b, k;//объ€вление переменных
    cout << "¬ведите значени€ переменных : ";
    cin >> a >> b >> k;
    if (a > b && a > k && b > k) {
        cout << a << " > " << b << " > " << k << endl;
    }
    else {
        cout << "”словие не соблюдаетс€." << endl;//вывести нужный результат
    }
    return 0;
}