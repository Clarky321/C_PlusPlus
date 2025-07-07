#include <iostream>

using namespace std;

/*
Написать ШАБЛОННУЮ функцию которая меняет местами значения 2-х переменных с помощью ССЫЛОК
*/

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int var1 = 31;
    int var2 = 64;

    cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;

    cout << endl;
    cout << "Swap" << endl;
    cout << endl;

    Swap(&var1, &var2);

    cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;

    return 0;
}