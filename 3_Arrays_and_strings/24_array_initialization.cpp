#include <iostream>

using namespace std;

// Инициализация массива

int main()
{
    setlocale(LC_ALL, "ru");

    int arr[]{1, 66, 12, 2};

    /*
    Для числовых типов, если массив не инициализирован, все его элементы равны 0;
    Для логических - false;
    Для строковых - пустой строке;
    */

    cout << arr[3] << endl;

    return 0;
}