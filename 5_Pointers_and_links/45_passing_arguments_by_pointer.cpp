#include <iostream>

using namespace std;

/*
Передача аргументов по указателю.
Как вернуть два и более значения из функции.
*/

/*
// Передача аргументов по указателю.

void Foo(int *pa)
{
    (*pa)++; // операция разыменования
}

int main()
{
    int a = 0;
    cout << a << endl; // a = 0

    Foo(&a);

    cout << a << endl; // a = 1

    return 0;
}
*/

// Как вернуть два и более значения из функции.

void Foo(int *pa, int *pb, int *pc)
{
    (*pa) = 555;

    (*pb)++;

    (*pc) = -20;
}

int main()
{
    int a = 0, b = 0, c = 1;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "foo" << endl;

    Foo(&a, &b, &c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}