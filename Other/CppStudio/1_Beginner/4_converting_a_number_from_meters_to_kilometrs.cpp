#include <iostream>

using namespace std;

/* Перевод числа из метров в километры */

int main()
{
    float a;

    cout << "Введите количество метров: "; cin >> a;
    
    cout << "\n";
    
    cout << a << " метров будет " << a / 1000 << " километр(ов)" << endl;

    return 0;
}