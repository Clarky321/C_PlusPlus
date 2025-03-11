#include <iostream>

using namespace std;

// Цикл с массивом

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 5;
    int arr[SIZE]{55, 511, 2, 123, 95};

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}