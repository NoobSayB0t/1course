#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;
    int** A = new int* [n]; // выделение динамической памяти
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[n];
    }
    cout << "Введите матрицу: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "A(" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
    cout << "Исходная матрица: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < m; j++)
        {
            cout << " " << A[i][j] << " ";
        }
        cout << "]" << endl;
    }
    // инициализируем переменную, которая будет искать комер столбика, содержащего хотя бы 1 нулевой элемент
    int stolb = 0;
    for (int i = 0; i < m; i++)
    {
        int a = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[j][i] == 0)
            {
                a++;
                break;
            }
        }
        if (a > 0)
        {
            stolb = i + 1;
            break;
        }
    }
    cout << "Номер первого столбца, содержащего хотя бы один нулевой элемент: " << stolb << endl;
    delete[] A; // освобождение динамической памяти
}
