#include <iostream>
#include <locale>

using namespace std;

/* Перевод в верхний регистр */

/*
Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,
переводит её в верхний регистр и результат выводит в консоль.

*/

int main()
{
    setlocale(LC_ALL, "ru");
    
    char symbol, convert;

    cout << "Введите букву нижнего регистра:" << endl;
    cin >> symbol;

    convert = int(symbol) - 32;
    
    cout << "Та же буква в верхнем регистре: " << convert << endl;

    return 0;
}