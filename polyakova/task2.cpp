#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 1, 8, 3, 1, 9, 4, 8, 1, 9};
    
    int minVal = arr[0], maxVal = arr[0];
    int minIdx = 0, maxIdx = 0;
    int countMin = 0, countMax = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] == minVal) countMin++;
        if (arr[i] == maxVal) countMax++;
    }

    cout << "Min: " << minVal << " (индекс " << minIdx << "), встречается раз: " << countMin << endl;
    cout << "Max: " << maxVal << " (индекс " << maxIdx << "), встречается раз: " << countMax << endl;

    return 0;
}