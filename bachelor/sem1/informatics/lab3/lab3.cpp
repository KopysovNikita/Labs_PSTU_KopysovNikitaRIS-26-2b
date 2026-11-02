#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int nMax;
    cin >> nMax;
    float k = (1 - 0.1) / 10;
    for (double x = 0.1; x <= 1; x += k)
    {
        double sumN = x;
        for (int n = 1; n <= nMax; n++)
        {
            sumN += pow((-1), n) * (pow(x, 2 * n + 1)) / (2 * n + 1);
        }
        double e = 0.0001;
        double sumE;
        double an;
        double am;
        sumE = 0;
        am = x;
        an = 0.0002;
        for (int n = 1; e < abs(am - an) && e < an; n++)
        {
            sumE += am;
            an = am;
            am *= x * x;
            am /= (2 * n + 1);
        }
        cout << "x = " << x << " SN = " << sumN << " SE = " << sumE << " y = " << atan(x) << endl;
    }
}