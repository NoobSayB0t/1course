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
    int str = 0; // инициализируем переменную, которая будет искать строку, не содержащую 0
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] == 0)
            {
                a++;
            }
        }
        if (a == 0)
            str++;
    }
    cout << "Kоличество строк, не содержащих ни одного нулевого элемента: " << str << endl;
    int maxCount = 0, maxItem = 0; // инициализируем переменные, которые будут находить и считать наиболее часто встречающийся элемент матрицы
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int count = 0;
            for (int p = 0; p < n; p++)
            {
                for (int q = 0; q < m; q++)
                {
                    if (A[i][j] == A[p][q])
                    {
                        count++;
                    }
                }
            }
            if (count > maxCount)
            {
                maxCount = count;
                maxItem = A[i][j];
            }
        }
    }
    cout << "Элемент, наиболее часто встречающийся в матрице: " << maxItem << endl;
    delete[] A; // освобождение динамической памяти
}
