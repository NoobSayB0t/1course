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
        cout << "������ ��������� � �������� ����� ���������� ��������: ";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        cout << "Diff = " << diff;
        break;
    }
    case 2: {
        cout << "������ ��������� � �������� ����� �������� ��������: ";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        cout << "Diff = " << diff;
        break;
    }
    case 3: {
        cout << "������ ���������� � �����:  ";
        cin >> a;
        a1 = char(a);
        cout << "a1 = " << a1;
        break;
    }
    case 4: {
        break;
    }
    default: {
        cout << "���������� ������ ���������� ���������: ";
        break;
    }
    }
    return 0;
}



using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    int y = 0, a1 = 0, b1 = 0, diff = 0;
    cout << "������ ����� 1, 2, 3, 4 = ";
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
    cout << "3 - ��� �����" << endl << "1 - ������� ��������� ����" << endl << "2 - ������� ������� ����" << endl << "4 - ����� �� ���������" << endl;
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
    cout << "������� ���������� ����: ";
    cin >> n;
    a1 = char(n);
    b1 = char(n);

    cout << "������� ��������� ����� �������� ��������: ";
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }

    cout << "������� ��������� ����� ������� ��������: ";
    for (int i = 0; i < n; i++) {
        cin >> b1[i];
    }
    for (int i = 0; i < n; i++) {
        if ((a1[i] >= 'A') && (a1[i] <= 'Z') || (b1[i] >= 'a') && (b1[i] <= 'z')) {
            cout << abs(int(b1[i] - a1[i])) << endl;
        }
        else {
            cout << "������";
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
        cout << "������� ���������� ����: ";
        cin >> n;
        a2 = char(n); 
        b2 = char(n); 

        cout << "������� ��������� ����� �������� ��������: ";
        for (int i = 0; i < n; i++) {
            cin >> a2[i]; 
        }

        cout << "������� ��������� ����� ������� ��������: ";
        for (int i = 0; i < n; i++) {
            cin >> b2[i]; 
        }
        for (int i = 0; i < n; i++) {
            if ((a2[i] >= '�') && (a2[i] <= '�') || (b2[i] >= '�') && (b2[i] <= '�')) {
                cout << abs(int(b2[i] - a2[i])) << endl;
            }
            else {
                cout << "������";
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
        cout << "������� ���������� ����: ";
        cin >> n;
        x = char[n];   
         
        cout << "������� �����: ";
        for (int i = 0; i < n; i++) {
            cin >> x[i]; 
        }
        for (int i = 0; i < n; i++) {
            if ((x[i] >= 48) && (x[i] <= 57))  { 
                printf("%X ", x[i]);  
            }
            else {
                cout << "������";
            }
        }
        return 0;
    }
