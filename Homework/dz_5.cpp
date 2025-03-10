#include <iostream>

using namespace std;

/*
Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int sum = 0;

    int rangeBegin, rangeEnd;

    cout << "Введите начало диапазона." << endl;
    cin >> rangeBegin;

    cout << "Введите конец диапазона." << endl;
    cin >> rangeEnd;

    do
    {
        if (rangeBegin % 2 != 0)
        {
            sum += rangeBegin;
        }

        rangeBegin++;

    } while (rangeBegin < rangeEnd);

    cout << "Сумма всех целых нечетных чисел в указанном диапазоне = " << sum << endl;

    return 0;
}