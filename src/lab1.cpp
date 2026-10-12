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


    float a1 = 1000.0;
    float b1 = 0.0001;

    float chis3 = pow(a+b, 5);
    float chis4 = pow(a, 5) + 5.0 * pow(a, 4) * b;
    float chis5= chis2 - chis3;

    float z4 = 10.0 * pow(a1, 3) * pow(b1, 2);
    float z5 = 10.0 * pow(a1, 2) * pow(b1, 3);
    float z6 = 5.0 * a * pow(b1, 4) + pow(b1, 5);
    float z7 = z4 + z5 + z6;

    float res1 = chis5 / z7;
    cout << "сравниние результатов" << endl << "double: " << res << endl << "float: " << res;

    return 0;

}
