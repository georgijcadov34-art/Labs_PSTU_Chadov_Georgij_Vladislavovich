#include <iostream>
using namespace std;

int main () {
    int mat[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] = rand() / 101 - 50;
        }
    }    
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;
    bool pr = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            if (mat[i][j] <= 0 && mat[i][j+1] <= 0 && mat[i][j+2] <= 0) {
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