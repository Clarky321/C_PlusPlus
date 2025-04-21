#include <iostream>

using namespace std;

/* Ссылки */

/*
Ссылка – это альтернативное имя переменной (её псевдоним, иными словами).
Когда функция принимает параметр по ссылке, имя параметра становится псевдонимом переменной, которую мы передаём в функцию.
Такой метод передачи данных позволяет функции работать со значениями переменных, которые передаются в неё, а не с копиями этих переменных.

Определяя функцию, чтобы указать, что параметр является ссылкой, необходимо перед  его именем добавить амперсанд &.
*/

/*
ПРИМЕР:

void showVariables(int varInt, double varDbl);
void change(int varInt, double varDbl);         // передача по значению
void changeRef(int& varInt, double& varDbl);    // передача по ссылке
void changePtr(int* varInt, double* varDbl);    // передача по указателю

int main()
{
 setlocale(LC_ALL, "rus");
 
 int varInteger = 0;
 double varDouble = 0.0;
 
 cout << "Передаем параметры по значению!" << endl;
 change(varInteger, varDouble);
 showVariables(varInteger, varDouble);
 
 cout << "Передаем параметры по ссылке!" << endl;
 changeRef(varInteger, varDouble);     // передаем, как обычную переменную
 showVariables(varInteger, varDouble);
 
 cout << "Передаем параметры по указателю!" << endl;
 changePtr(&varInteger, &varDouble);   // используем амперсанд, чтобы передать адрес
 showVariables(varInteger, varDouble);
 
 return 0;
}
 
void showVariables(int varInt, double varDbl)
{
 cout << "Значения переменных после изменений:\n";
 cout << "Первая переменная (int) = " << varInt << endl;
 cout << "Вторая переменная (double) = " << varDbl << endl;
 cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}
//================================================================
void change(int varInt, double varDbl)
{
 varInt = 100;
 varDbl = 111.11;;
}
//================================================================
void changeRef(int& varInt, double& varDbl)
{
 varInt = 200;     // обращаемся, как к обычной переменной
 varDbl = 222.22;
}
//================================================================
void changePtr(int* varInt, double* varDbl)
{
 *varInt = 300;     // применяем разыменование
 *varDbl = 333.33;
}
*/

int main()
{
    int a = 5;

    int *pa = &a; // указатель = результат будет 16-ая система исчисления

    int &aRef = a; // ссылка - без оператора разыменования = 5

    cout << "*pa\t" << pa << endl;
    // cout << "*pa\t" << *pa << endl; - вывод будет = 5

    cout << "&aRef\t" << aRef << endl;

    return 0;
}