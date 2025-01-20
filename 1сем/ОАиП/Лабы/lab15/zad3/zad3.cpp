#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int size, mult = 1, sum = 0, ** A;
    cout << "Enter size: ";
    cin >> size;
    srand(time(0));
    A = new int* [size];
    for (int i = 0; i < size; i++)
        A[i] = new int[size];
    for (int i = 0; i < size; i++) { 
        for (int j = 0; j < size; j++) {
            A[i][j] = 1 + rand() % 10;
        }
    }
    for (int** ptr = A; ptr != A + size; ++ptr) {
        for (int* it = *ptr; it != *ptr + size; ++it) {
            cout << "\t" << *it;
            if (*it % 2 == 0) {
                mult *= *it;
                sum += *it;
            }
        }
        cout << endl;
    }
    cout << "Sum: " << sum << endl;
    cout << "Mult: " << mult << endl;
    for (int i = 0; i < size; i++) 
        delete[] A[i];
    delete[] A;
    return 0; 
}
