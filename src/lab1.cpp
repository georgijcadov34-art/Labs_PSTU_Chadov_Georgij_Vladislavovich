#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    double a = 1000.0;
    double b = 0.0001;

    double chis1 = pow(a+b, 5);
    double chis2 = pow(a, 5) + 5.0 * pow(a, 4) * b;
    double chis = chis1 - chis2;

    double z1 = 10.0 * pow(a, 3) * pow(b, 2);
    double z2 = 10.0 * pow(a, 2) * pow(b, 3);
    double z3 = 5.0 * a * pow(b, 4) + pow(b, 5);
    double z = z1 + z2 + z3;

    double res = chis / z;
    cout << res;
    return 0;

}
