#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    const int n = 3, m = 3; // размеры матриц
    int A[n][m] = { {4, 5, 6}, {1, 2, 3}, {7, 8, 9} };
    int B[n][m] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int lessCount = 0, equalCount = 0, greaterCount = 0;

    for (int i = 0; i < n; ++i) { // подсчёт количества пар
        for (int j = 0; j < m; ++j) {
            if (A[i][j] < B[i][j]) {
                ++lessCount;
            }
            else if (A[i][j] == B[i][j]) {
                ++equalCount;
            }
            else {
                ++greaterCount;
            }
        }
    }
    cout << "Количество пар, где A[i][j] < B[i][j]: " << lessCount << endl;
    cout << "Количество пар, где A[i][j] = B[i][j]: " << equalCount << endl;
    cout << "Количество пар, где A[i][j] > B[i][j]: " << greaterCount << endl;

    return 0;
}
