#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double eps = 0.0001;
    double sum = 0;
    double a = 1;
    int n = 1;

    while (a >= eps) {
        a = (double)(n * n) / pow(2, n);
        if (a < eps) break;
        sum = sum + a;
        n = n + 1;
    }

    cout << "Сумма = " << sum << endl;
    return 0;
}

