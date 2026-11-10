#include <iostream>

using namespace std;
#include <windows.h>
int main() {
    
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    cout << "Вы ввели: " << n << endl;
    if (n % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    bool is_paired = true;
    
    for (int i = 0; i < n / 2; i++) {
        int first, second;
        cin >> first >> second;
        
        if (first != second) {
            is_paired = false;
        }
    }

    if (is_paired) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}