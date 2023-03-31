#include <bits/stdc++.h>
using namespace std;
int main() {
    // Calculation in data types
    cout << 7/2<<endl; // 3
    // int/int = int
    // claculation happens in higher data type
    cout << 'c'+1<<endl; //100

    // presendence : Double > float > long long > long int > int > char
    int a = 3/2.0;
    cout << a <<endl; // 1
    // int/double  = double ,but when double stored in int ,it becomes int

    //OVERFLOW

    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    // INT_MAX + 1 = INT_MIN

    int p = 100000;
    int q = 100000;

    long int c = p * 1LL * q; // int * longlong * int  = longlong
    cout << c <<endl;

    double j = 100000, k = 200000;
    double z = j*k;
    cout << fixed<< setprecision(0) << z << endl;
    // fixed : to not print in scientific notation ie, 2e+10
    // setprecision(x) : number of digits after decimal

    //Don't use double for large numbers coz of precision errors
}
