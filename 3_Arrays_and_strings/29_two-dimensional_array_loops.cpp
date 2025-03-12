#include <iostream>
#include <ctime>

using namespace std;

/* Двумерный массив в циклах */

int main()
{
    setlocale(LC_ALL, "ru");

    const int ROWS = 5;
    const int COLS = 8;

    int arr[ROWS][COLS];

    // Перебор элементов двумерного массива
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    // Вывод двумерного массива в cout
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}