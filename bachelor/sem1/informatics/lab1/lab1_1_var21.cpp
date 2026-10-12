#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double a = 100;
    double b = 0.001;
    double c = pow(a - b, 4);
    cout << c << '\n';
    double d = pow(a, 4);
    cout << d << '\n';
    double e = 4 * pow(a, 3) * b;
    cout << e << '\n';
    double f = 6 * a * a * b * b;
    cout << f << '\n';
    double g = pow(b, 4);
    cout << g << '\n';
    double q = 4 * a * pow(b, 3);
    cout << q << '\n';
    cout << (c - (d - e + f)) / (g - q);
    return 0;
}