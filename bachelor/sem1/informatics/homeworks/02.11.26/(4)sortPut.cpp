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

    for (int i = 1; i < n;i++)
    {
        int y = a[i];
        int j = i - 1;
        bool f = false;

        while (j >= 0 && f == false)
        {
            if (a[j] > y)
            {
                a[j + 1] = a[j];
            }
            else
            {
                a[j + 1] = y;
                f = true;
            }
            j--;
        }
        if (f == false)
        {
            a[0] = y;
        }
    }
    for (int i = 0; i < n;i++)
    {
        cout << a[i] << " ";
    }
}