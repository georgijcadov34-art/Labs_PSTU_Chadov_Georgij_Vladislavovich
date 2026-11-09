#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {3, 7, 2},
        {8, 1, 9},
        {4, 6, 5}
    };

    int maxVal = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Максимум: " << maxVal << endl;
    cout << "Строка: " << maxRow << ", Столбец: " << maxCol << endl;

    return 0;
}