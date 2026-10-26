#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int first;
    double sum = 0;
    cout << "введите первый член из 13:";
    cin >> first;
    for (int i = 0; i < 13; i++)
    {
        double fac = 1;
        for (int g = 1; g <= first + i; g++)
        {
            fac *= g;
        }
        sum += log(fac) / pow(first + i, 2);
    }
    cout << "Сумма с " << first << " по " << first + 12 << ": " << sum << endl;
}