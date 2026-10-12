#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n,m ;
    cout << "введите n";
    cin >> n;
    cout << "введите m";
    cin >> m;

    int n1 = n, m1 = m;
    int n2 = n, m2 = m;
    int n3 = n, m3 = m;

    int res = n1 - (--m1);
    cout << "1) n - (--m) = " << res << endl;

    cout << "2) Проверка ";
    if (m2++ > --n2) {
        cout << "Истина" << endl;
    } else {
        cout << "Ложь" << endl;
    }

    cout << "3) Проверка ";
    if (++n3 < m3--) {
        cout << "Истина" << endl;
    } else {
        cout << "Ложь" << endl;
    }

    return 0;
    
}