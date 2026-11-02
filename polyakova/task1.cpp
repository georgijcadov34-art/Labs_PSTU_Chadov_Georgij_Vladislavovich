#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << matrix[i][j] << " ";
            sum = sum + matrix[i][j];
        }
        cout << " | Сумма строки: " << sum << endl;
    }

    return 0;
}