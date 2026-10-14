#include <iostream>

using namespace std;

#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;

    cout << "Введите значение n: ";
    cin >> n;
    cout << "Введите значение m: ";
    cin >> m;

    int n1 = n, m1 = m;
    int n2 = n, m2 = m;
    int n3 = n, m3 = m;

    cout << "Результат" << endl;
    int res1 = n1 - (--m1);
    cout << "1) n - (--m) = " << res1 << endl;

    cout << "2) Проверка условия: ";
    if (m2++ > --n2) {
        cout << "Истина" << endl;
    } else {
        cout << "Ложь" << endl;
    }

    cout << "3) Проверка: ";
    if (++n3 < m3--) {
        cout << "Истина" << endl;
    } else {
        cout << "Ложь" << endl;
    }

    return 0;
}