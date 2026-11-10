#include <iostream>
using namespace std;

int main () {
    cout << "введите колличество строк и столбцов(до 10)";
    int m,n;
    cin >> m >> n;
    int mat[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = rand() / 101 - 50;
        }
    }

    cout << "исходная матрица";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    bool pr = true;
    for (int i = 0; i < m; i++) {
        int k = 0;
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                k++;
            }
            if (k == n){ 
                pr = false;
            }
        }
    }
    if (pr == 1) {
        cout << "good";
    }
    else {
        cout << "bad";
    }
    return 0;
}