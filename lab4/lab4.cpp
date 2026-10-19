#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));

    const int MAX_SIZE = 100;
    int M[MAX_SIZE];
    int n;
    int K = 10;

    n = K;
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < n; i++) {
        M[i] = rand() % 20 - 5;
        cout << M[i] << " ";
    }
    cout << endl << endl;

    int new_n = 0; 
    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) { 
            M[new_n] = M[i];
            new_n++;
        }
    }
    n = new_n;

    cout << "Массив после удаления четных позиций:" << endl;
    for (int i = 0; i < n; i++) {
        cout << M[i] << " ";
    }
    cout << endl << endl;

    for (int i = n - 1; i >= 0; i--) {
        if (M[i] % 5 == 0 && M[i] != 0) {

            for (int j = n; j > i + 1; j--) {
                M[j] = M[j - 1];
            }

            M[i + 1] = M[i] - 1; 
            
            n++;
        }
    }

    cout << "Итоговый массив после добавления элементов:" << endl;
    for (int i = 0; i < n; i++) {
        cout << M[i] << " ";
    }
    cout << endl;

    return 0;
}