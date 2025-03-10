#include <iostream>

using namespace std;

/*
Разработать программу, которая выводит на экран линию из символов.
Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int symbolCount;
    char symbol;
    int lineType;
    int index = 0;

    cout << "Введите количество символов в линии:" << endl;
    cin >> symbolCount;

    cout << "Введите символ:" << endl;
    cin >> symbol;

    cout << "Выберите тип линии" << endl;
    cout << "1 - вертикальная линия" << endl;
    cout << "2 - горизонтальная линия" << endl;
    cin >> lineType;

    if (lineType != 1 && lineType != 2)
    {
        cout << "Не корректный тип линии!" << endl;

        return;
    }

    while (index < symbolCount)
    {
        if (lineType == 1)
        {
            cout << symbol << endl;
        }
        if (lineType == 2)
        {
            cout << symbol;
        }

        index++;
    }

    return 0;
}