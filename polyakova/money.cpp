#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

struct Worker {
    char fio[100];
    int days;
    double dayPay;
    double bonus;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Worker w;

    cout << "ФИО (без пробелов или введи с подчеркиваниями): ";
    cin >> w.fio;
    cout << "Отработанные дни: ";
    cin >> w.days;
    cout << "Оплата за день: ";
    cin >> w.dayPay;
    cout << "Премия: ";
    cin >> w.bonus;

    double salary = w.days * w.dayPay + w.bonus;
    cout << "Работник: " << w.fio << ", зарплата: " << salary << "\n";
    return 0;
}