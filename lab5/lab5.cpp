#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

const int N = 50;
const int M = 5;

void fill(int a[][M], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = rand() % 21 - 10;
        }
    }
}

void print(int a[][M], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int countNeg(int a[][M], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < M; j++) {
            s += a[i][j];
        }
        if (s < 0) k++;
    }
    return k;
}

void delNeg(int a[][M], int n) {
    int k = countNeg(a, n);
    if (k == 0) return;

    int pos = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < M; j++) {
            s += a[i][j];
        }
        if (s >= 0) {
            if (pos != i) {
                for (int j = 0; j < M; j++) {
                    a[pos][j] = a[i][j];
                }
            }
            pos++;
        }
    }

    for (int i = pos; i < n; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = 0;
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));

    int n;
    cout << "Введите количество строк (1" << N << "): ";
    cin >> n;

    if (n <= 0 || n > N) {
        cout << "плохо" << endl;
        return 1;
    }

    int a[N][M];

    fill(a, n);
    cout << "\n Исходный массив:\n";
    print(a, n);

    int k = countNeg(a, n);
    cout << "\n Строк с отрицательной суммой: " << k << endl;

    delNeg(a, n);
    cout << "\nРезультат:\n";
    print(a, n);

    return 0;
}