/*
Написать калькулятор, исходя из предыдущего изученного материала.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, selection;
    cout << "Введите 2 числа" << endl;
    cin >> a >> b;

    cout << "Выберите математическую операцию" << endl;

    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Деление" << endl;

    cin >> selection;

    switch (selection)
    {
    case 1:
    {
        cout << "Результат сложения: " << a + b << endl;
    }
    break;

    case 2:
    {
        cout << "Результат вычитания: " << a - b << endl;
    }
    break;

    case 3:
    {
        cout << "Результат умножения: " << a * b << endl;
    }
    break;

    case 4:
    {
        if (b != 0)
        {
            cout << "Результат деления: " << (double)a / b << endl;
        }
        else
        {
            cout << "На ноль делить нельзя" << endl;
        }
    }
    break;

    default:
        cout << "Ошибка! Пункт меню отсутствует!" << endl;
        break;
    }

    return 0;
}