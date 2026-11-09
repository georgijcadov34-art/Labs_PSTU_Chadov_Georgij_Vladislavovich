#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 2, 4, 5}; 
    int size = 5;
    
    bool F = false;
    int i = 0;

    while (i < size - 1 && F == false) {
        if (arr[i] >= arr[i + 1]) {
            F = true;
        }
        i++;
    }

    if (F == false) {
        cout << "Массив упорядочен по возрастанию" << endl;
    } else {
        cout << "Массив не упорядочен" << endl;
    }

    return 0;
}