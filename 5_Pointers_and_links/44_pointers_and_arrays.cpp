#include <iostream>

using namespace std;

/* Указатели и массивы. Арифметика указателей. */

int main()
{
    const int SIZE = 5;
    int arr[SIZE]{4, 55, 79, 1, 4};

    // cout << *(arr + 1) << endl; // смешение ячейки массива

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    
    // Равносильно

    cout << "=====================" << endl;

    int *pArr = arr; // тоже самое int arr[SIZE]{4, 55, 79, 1, 4};

    cout << "arr\t" << arr << endl;
    cout << "pArr\t" << pArr << endl;

    cout << "=====================" << endl;

    /*
    for (int i = 0; i < SIZE; i++)
    {
        cout << pArr[i] << endl;
    }
    */

    // Пример арифметики указателей

    for (int i = 0; i < SIZE; i++)
    {
        cout << *(pArr + i) << endl;
    }
    

    return 0;
}