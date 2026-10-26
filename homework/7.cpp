#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n = 7;
    int center = n / 2;

    cout << "1. Закрашенный ромб:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (abs(i - center) + abs(j - center) <= center) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "\n2. Только периметр ромба:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (abs(i - center) + abs(j - center) == center) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}