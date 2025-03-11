#include <iostream>
#include <ctime>

using namespace std;

/* Найти самое маленькое число в массиве и вывести его на экран */

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

    int minValue = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    cout << "Наименьшее число в массиве: " << minValue << endl;

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

    // Заполнение массива уникальными случайными числами
    for (int i = 0; i < SIZE;)
    {
        int newRandomValue = rand() % 20;
        bool isUnique = true;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            arr[i++] = newRandomValue;
        }
    }

    // Вывод массива на экран
    cout << "Сгенерированный массив: \n";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    // Поиск наименьшего числа в массиве
    int minValue = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    cout << "Наименьшее число в массиве: " << minValue << endl;

    return 0;
}