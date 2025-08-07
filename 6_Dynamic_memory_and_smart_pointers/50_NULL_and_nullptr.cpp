#include <iostream>
#include <string>

using namespace std;

/*
Работа с динамической памятью. NULL и nullptr
*/

int main()
{
    int *pa = new int;
    *pa = 10;
    cout << *pa << endl;
    delete pa;

    /*
    pa = NULL;

    if (pa != NULL)
    {
        cout << pa << endl;
    }
    */

    pa = nullptr;

    if (pa != nullptr)
    {
        cout << pa << endl;
    }

    delete pa;
}