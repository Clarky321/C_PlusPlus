/*
Домашнее задание
Введите три числа и выведите на экран значение суммы, произведения и среднее арифметическое этих чисел.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, c;

    cout << "Введите три числа" << endl;
    cin >> a >> b >> c;

    cout << "Сумма трёх введёных чисел: " << a + b + c << endl;

    cout << "Произведения трёх введёных чисел: " << a * b * c << endl;

    cout << "Среднее арифметическое трёх чисел: " << (double)(a + b + c) / 3 << endl;

    return 0;
}