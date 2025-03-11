#include <iostream>
#include <ctime>

using namespace std;

/* Заполнить массив уникальными случайными числами */

/*
ПРИМЕР РЕШЕНИЯ №1

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    bool alreadyThere;

    for (int i = 0; i < SIZE;)
    {
        alreadyThere = false;

        int newRandomValue = rand() % 20;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                alreadyThere = true;
                break;
            }
        }

        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
*/

/*
ПРИМЕР РЕШЕНИЯ №2
*/

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(nullptr));

    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE;)
    {
        int newRandomValue = rand() % 20;
        bool isUnique = true;

        // Проверяем, есть ли число в массиве
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                isUnique = false;
                break;
            }
        }

        // Если число уникально, добавляем в массив
        if (isUnique)
        {
            arr[i++] = newRandomValue;
        }
    }

    cout << "Сгенерированный массив уникальных чисел: \n";
    for (int num : arr)
    {
        cout << num << endl;
    }

    return 0;
}