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
    for (int i = 0; i < n;i++)
    {
        for (int j = n - 1; j > i;j--)
        {
            if (a[j] < a[j - 1])
            {
                int y = a[j];
                a[j] = a[j - 1];
                a[j - 1] = y;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}