#include <iostream>

using namespace std;

/* Написать функцию которая меняет местами значения 2-х переменных */

/*
void Foo(int *pa, int *pb)
{
    (*pa) = 10;
    (*pb) = 20;
}

int main()
{
    int a;
    int b;

    Foo(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "==============" << endl;

    if (a == 10)
    {
        cout << "a = " << b << endl;
    }

    if (b == 20)
    {
        cout << "b = " << a << endl;
    }

    return 0;
}
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

    cout << "Swap" << endl;
    Swap(&var1, &var2);

    cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;

    return 0;
}