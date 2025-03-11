#include <iostream>

using namespace std;

/* sizeof */

/*
Оператор sizeof в C++ позволяет определить размер в байтах различных типов данных и переменных.

Он играет важную роль в управлении памятью и повышает эффективность программирования,
предоставляя возможность оценить, сколько памяти требуется для хранения данных.
*/

int main()
{
    setlocale(LC_ALL, "ru");

    // const int SIZE = 10;
    // int arr[SIZE];

    int arr[]{5, 33, 545, 111, 326};

    // int a = sizeof(arr);
    // int b = sizeof(int);

    // cout << sizeof(arr) / sizeof(int) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    /*
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    */

    return 0;
}