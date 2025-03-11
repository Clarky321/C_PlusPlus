#include <iostream>

using namespace std;

/*
Ключевое слово continue

Оператор continue в C++ используется в циклах для пропуска текущей итерации и перехода к следующей.
В отличие от оператора break, который полностью выходит из цикла, оператор continue пропускает только одну итерацию.
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue; // при выполнении условия i == 5, в цикле for,
        }

        cout << "переменная i = " << i << endl;
    }

    return 0;
}