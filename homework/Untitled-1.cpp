#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i<n/3; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if ((a == b) == c) {
            cout << "good" << endl;
        }
        else {
            cout << "bad";
        }
    }
    return 0;
}