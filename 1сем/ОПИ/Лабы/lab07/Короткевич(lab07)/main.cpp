#include <iostream>
#include <windows.h>
using namespace std;

int var(int in)
{
    using namespace std;
    SetConsoleCP(1251);  
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



#include <iostream>
#include <windows.h>
#include "symbol.h"
using namespace std;

int symbol()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int n;
    cout << "3 - Код цифры" << endl << "1 - Разница латинских букв" << endl << "2 - Разница русских букв" << endl << "4 - Выход из программы" << endl;
    cin >> n;
    return n;
}


#include <iostream>
#include <windows.h>
#include "case1.h"

using namespace std;
int case1()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int n, a1 = 0, b1 = 0;
    cout << "Введите количество букв: ";
    cin >> n;
    a1 = char(n);
    b1 = char(n);

    cout << "Введите латинскую букву верхнего регистра: ";
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }

    cout << "Введите латинскую букву нижнего регистра: ";
    for (int i = 0; i < n; i++) {
        cin >> b1[i];
    }
    for (int i = 0; i < n; i++) {
        if ((a1[i] >= 'A') && (a1[i] <= 'Z') || (b1[i] >= 'a') && (b1[i] <= 'z')) {
            cout << abs(int(b1[i] - a1[i])) << endl;
        }
        else {
            cout << "Ошибка";
        }
    }
    return 0;
}


#include <iostream>
#include <windows.h>
#include "case2.h"

    using namespace std;
    int case2()
    {
        setlocale(LC_ALL, "Russian");
        SetConsoleCP(1251); 
        int n, a2 = 0, b2 = 0;
        cout << "Введите количество букв: ";
        cin >> n;
        a2 = char(n); 
        b2 = char(n); 

        cout << "Введите латинскую букву верхнего регистра: ";
        for (int i = 0; i < n; i++) {
            cin >> a2[i]; 
        }

        cout << "Введите латинскую букву нижнего регистра: ";
        for (int i = 0; i < n; i++) {
            cin >> b2[i]; 
        }
        for (int i = 0; i < n; i++) {
            if ((a2[i] >= 'А') && (a2[i] <= 'Я') || (b2[i] >= 'а') && (b2[i] <= 'я')) {
                cout << abs(int(b2[i] - a2[i])) << endl;
            }
            else {
                cout << "Ошибка";
            }
        }
        return 0;
    }


#include <iostream>
#include <windows.h>
#include "case3.h"
using namespace std;

    int case3()
    {
        setlocale(LC_ALL, "Russian");
        SetConsoleCP(1251);

        int n, x = 0; 
        cout << "Введите количество цифр: ";
        cin >> n;
        x = char[n];   
         
        cout << "Введите цифру: ";
        for (int i = 0; i < n; i++) {
            cin >> x[i]; 
        }
        for (int i = 0; i < n; i++) {
            if ((x[i] >= 48) && (x[i] <= 57))  { 
                printf("%X ", x[i]);  
            }
            else {
                cout << "Ошибка";
            }
        }
        return 0;
    }
