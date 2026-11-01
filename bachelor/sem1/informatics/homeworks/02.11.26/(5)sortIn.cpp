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
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min]) min = j;
        }

        int y = a[i];
        a[i] = a[min];
        a[min] = y;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}