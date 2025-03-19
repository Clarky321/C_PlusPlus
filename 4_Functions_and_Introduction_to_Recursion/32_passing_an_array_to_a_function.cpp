#include <iostream>

using namespace std;

/* Передача массива в функцию */

/*
В данном примере, мы создаём две функции, в которых применяем цикл и массив.

FillArray - это функция принимающая массив arr[] и константу size,
далее внутри функции создаётся цикл for, в котором применяется функция rand() % 100;
В итоге функция создаёт цикл и закладывает в нём массив

PrintArray - в данной функции делается то же, что и в прошлой функции, единственная разница заключается в том,
что теперь мы выводим содержание функции FillArray в консоль.
*/

void FillArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void PrintArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    const int SIZE = 10; // размер массива
    int arr[SIZE];

    FillArray(arr, SIZE); // вызов первой функции

    PrintArray(arr, SIZE); // вызов второй функции

    return 0;
}