#include <iostream>
#include <cmath>
#include <cstdarg>
#include <windows.h>
using namespace std;

int absVal(int x) {
    return (x < 0) ? -x : x;
}

double absVal(double re, double im) {
    return sqrt(re * re + im * im);
}

double avg(int count, ...) {
    if (count <= 0) {
        return 0.0;
    }

    va_list args;
    va_start(args, count);

    long long sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return static_cast<double>(sum) / count;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "=== Часть 7.1 Перегрузка функций ===" << endl;
    int n1 = -42;
    int n2 = 17;
    cout << "Модуль целого числа " << n1 << " = " << absVal(n1) << endl;
    cout << "Модуль целого числа " << n2 << " = " << absVal(n2) << endl;

    double re1 = 3.0, im1 = 4.0;
    double re2 = -5.0, im2 = 12.0;
    cout << "Модуль комплексного числа (" << re1 << " + " << im1 << "i) = " << absVal(re1, im1) << endl;
    cout << "Модуль комплексного числа (" << re2 << " + " << im2 << "i) = " << absVal(re2, im2) << endl;

    cout << endl << "=== Часть 7.2 Функция avg c переменным числом параметров ===" << endl;

    double r3 = avg(3, 10, 20, 30);
    cout << "avg(3, 10, 20, 30) = " << r3 << endl;

    double r6 = avg(6, 2, 4, 6, 8, 10, 12);
    cout << "avg(6, 2, 4, 6, 8, 10, 12) = " << r6 << endl;

    double r9 = avg(9, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    cout << "avg(9, 1, 2, 3, 4, 5, 6, 7, 8, 9) = " << r9 << endl;

    return 0;
}