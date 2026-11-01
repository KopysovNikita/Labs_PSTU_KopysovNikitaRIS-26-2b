#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int n = 7;
    int a[n];

    cout << "Введите 7 целых чисел:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    int maxCount = 0; // если останется 1 элемент, то 1 прибавиться в else if (max == a[i]) maxCount++;
    int minCount = 0;
    int maxId = 0;
    int minId = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxId = i;
            maxCount = 1;
        }
        else if (max == a[i]) maxCount++;

        if (min > a[i])
        {
            min = a[i];
            minId = i;
            minCount = 1;
        }
        else if (min == a[i]) minCount++;
    }
    cout << "max = " << max << "(индекс: " << maxId << " кол-во: " << maxCount << ")\n"
        << "min = " << min << "(индекс: " << minId << " кол-во: " << minCount << ")\n";
}