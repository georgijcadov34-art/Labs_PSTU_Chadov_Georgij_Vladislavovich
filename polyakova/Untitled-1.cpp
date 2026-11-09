#include <iostream>
using namespace std;
#include <windows.h>
int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    bool pidr = false;
    int year;
    cout << "введите возраст";
    cin >> year;

    if (year >= 18 && pidr == false) {
        cout << "красавчик";
    }

    else {
        cout << "не красавчик";
    }

return 0;
}