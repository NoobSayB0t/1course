#include <iostream>
using namespace std;

int var(int in)
{
    using namespace std;
    int a1 = 0, b1 = 0, diff = 0;
    char a, b;
    switch (in)
    {
    case 1: {
        cout << "Ввести заглавную и строчную букву латинского алфавита: ";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        cout << "Diff = " << diff;
        break;
    }
    case 2: {
        cout << "Ввести заглавную и строчную букву русского алфавита: ";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        cout << "Diff = " << diff;
        break;
    }
    case 3: {
        cout << "Ввести клавиатуру с цифру:  ";
        cin >> a;
        a1 = char(a);
        cout << "a1 = " << a1;
        break;
    }
    case 4: {
        break;
    }
    default: {
        cout << "Необходимо ввести корректный результат: ";
        break;
    }
    }
    return 0;
}



using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    int y = 0, a1 = 0, b1 = 0, diff = 0; 
    cout << "Ввести числа 1, 2, 3, 4 = ";
    cin >> y; 
    var(y); 
}