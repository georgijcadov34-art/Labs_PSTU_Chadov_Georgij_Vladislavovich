#include <iostream>
using namespace std;

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = 8;
    
    cout << "before: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    for (int h = n / 2; h > 0; h = h / 2) { 
        for (int i = h; i < n; i++) {
            int temp = a[i];
            int j = i;
            while (j >= h && a[j - h] > temp) {
                a[j] = a[j - h];
                j = j - h;
            }
            a[j] = temp;
        }
    }
    cout << "after: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}