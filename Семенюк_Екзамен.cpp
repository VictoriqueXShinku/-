#include <iostream>
#include <time.h>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n";

    int x, y, min;
    min = abs(arr[1] - arr[0]);
    y = 1;
    x = 0;
    for (int i = 1; i < size; i++)
    {
        if (abs(arr[i + 1] - arr[i]) < min) {
            min = abs(arr[i + 1] - arr[i]);
            x = i;
            y = i + 1;
            //cout << min << " ";
        }
    }

    cout << "\nМінімальне значення:" << min << "\nІндекс i+1: " << y + 1 << "\nІндекс i: " << x + 1 << "\n\n";
}