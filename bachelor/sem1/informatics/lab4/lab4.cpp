#include <iostream>
#include <windows.h>

using namespace std;
const int n = 10;
int mass[n];
void fill()
{
    cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
}
void right(int& k)
{
    for (int i = k; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    for (int i = 0; i < k; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
}
void left(int& k)
{
    for (int i = k; i >= 0; i--)
    {
        cout << mass[i] << " ";
    }
    for (int i = n - 1; i > k; i--)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
}
void fillPart()
{
    int a, b, c, d;
    cout << "введите 1 и 3 последних элемента через пробел: ";
    cin >> a >> b >> c >> d;
    mass[0] = a;
    mass[n - 3] = b;
    mass[n - 2] = c;
    mass[n - 1] = d;
}
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int kom = -1;
    while (kom != 0)
    {
        cout << "1: заполнить кольцо полностью\n"
            "2: вывести кольцо от К вправо\n"
            "3: вывести кольцо от K влево\n"
            "4: заполнить 1 и 3 последних\n"
            "0: выход из программы\n";
        cin >> kom;
        int i;
        switch (kom)
        {
            case 1:
                fill();
                break;
            case 2:
                cout << "Введите k: ";
                cin >> i;
                right(i);
                break;
            case 3:
                cout << "Введите k: ";
                cin >> i;
                left(i);
                break;
            case 4:
                fillPart();
            default:
                continue;
        }
    }
}