#include <iostream>
#include <cmath> 

using namespace std;

int main() {

    double a, b, eps, step;
    a = 0.1;
    b = 0.8;
    int n_fixed = 15;
    eps = 0.0001;
    step = (b - a) / 10.0;


    for (double x = a; x <= b + 0.00001; x += step) {

        double SN = 0;
        double term = x;
        
        for (int i = 1; i <= n_fixed; i++) {

            SN += term;
            term = term * (-x) * ((double)i / (i + 1));
        }

        double SE = 0;
        term = x;
        int i = 1;
        
        while (abs(term) >= eps) {
            SE += term;
            
            term = term * (-x) * ((double)i / (i + 1));
            i++;
        }

        double Y = log(1 + x); 

        cout << x << "\t" 
             << SN << "\t" 
             << SE << "\t" 
             << Y << endl;
    }

    return 0;
}