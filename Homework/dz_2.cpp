/*
Написать программу, проверяющую число, введенное с клавиатуры на четность.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int var;

    cout << "Введите число для проверки на чётность: " << endl;
    cin >> var;

    if (var % 2 == 0)
    {
        cout << "Число" << var << " чётное" << endl;
    }
    else
    {
        cout << "Число " << var << " не чётное" << endl;
    }

    return 0;
}