#include <iostream>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int original[7] = {7, 3, 5, 1, 4, 2, 6};
    int n = 7;

    cout << "=== 1. Вставками ===" << endl;
    int a1[7];
    for (int i = 0; i < n; i++) a1[i] = original[i];
    
    for (int i = 1; i < n; i++) {
        int key = a1[i];
        int j = i - 1;
        while (j >= 0 && a1[j] > key) {
            a1[j + 1] = a1[j];
            j--;
        }
        a1[j + 1] = key;
        printArr(a1, n);
    }

    cout << "\n=== 2. Выбором ===" << endl;
    int a2[7];
    for (int i = 0; i < n; i++) a2[i] = original[i];
    
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a2[j] < a2[minIdx]) minIdx = j;
        }
        // Меняем местами
        int temp = a2[i];
        a2[i] = a2[minIdx];
        a2[minIdx] = temp;
        printArr(a2, n);
    }

    cout << "\n=== 3. Обменом ===" << endl;
    int a3[7];
    for (int i = 0; i < n; i++) a3[i] = original[i];
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a3[j] > a3[j + 1]) {
                int temp = a3[j];
                a3[j] = a3[j + 1];
                a3[j + 1] = temp;
            }
        }
        printArr(a3, n);
    }

    return 0;
}