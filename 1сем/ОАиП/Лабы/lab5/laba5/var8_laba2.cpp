#include <iostream>//����������� ����������
using namespace std;

int main()//���������� �������
{
    setlocale(LC_CTYPE, "Russian");//��� ������������� ���������
    double a, b, k;//���������� ����������
    cout << "������� �������� ���������� : ";
    cin >> a >> b >> k;
    if (a > b && a > k && b > k) {
        cout << a << " > " << b << " > " << k << endl;
    }
    else {
        cout << "������� �� �����������." << endl;//������� ������ ���������
    }
    return 0;
}