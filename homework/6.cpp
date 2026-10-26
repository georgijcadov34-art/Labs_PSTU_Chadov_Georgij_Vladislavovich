#include <iostream>


#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int size = 5;

    cout << "1. Закрашенный квадрат:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n2. Только периметр квадрата:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}