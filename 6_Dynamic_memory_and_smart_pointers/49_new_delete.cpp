#include <iostream>
#include <string>

using namespace std;

/*
Работа с динамической памятью. Операторы выделения памяти new и delete.
*/

int main()
{
    int *pa = new int;
    *pa = 10;
    cout << *pa << endl;

    delete pa;
}