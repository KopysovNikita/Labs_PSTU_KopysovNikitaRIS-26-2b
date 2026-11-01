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
    bool f = true;
    int i = 0;
    while (i < n - 1 && f)
    {
        if (a[i] > a[i + 1])f = false;
        i++;
    }
    if (f) cout << "Возрастает";
    else cout << "Не возрастает";
    return 0;
}