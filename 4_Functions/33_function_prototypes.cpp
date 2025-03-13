#include <iostream>

using namespace std;

/* Функции, прототипы */

/*
Вызов прототипа (Реализация после int main(), а прототип вызываем сверху, до int main())

void foo();

int main()
{
    foo();

    return 0;
}

void foo()
{
    cout << "Я функция, меня вызвали!" << endl;
}
*/

/* прототипирование функций с параметрами */

void foo(int a, int b);

int main()
{
    foo(5, 6);

    return 0;
}

void foo(int a, int b)
{
    cout << "Я вызвал функцию, я здесь!" << endl;
}