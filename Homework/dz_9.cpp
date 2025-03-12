#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    const int AMOUNT_FLOORS = 7;                           // к-во этажей
    const int AMOUNT_PARKINGS = 10;                        // к-во парковочных мест на этаже
    int floorsAndParkings[AMOUNT_FLOORS][AMOUNT_PARKINGS]; // объявление двумерного массива

    // присвоение значений и отображение
    cout << "~~Таблица мест паркинга (0 - место забронировано)~~" << endl
         << endl;

    for (int f = 0; f < AMOUNT_FLOORS; f++) // используем встроенные циклы
    {
        cout << f + 1 << "-й этаж:  ";
        for (int p = 0; p < AMOUNT_PARKINGS; p++)
        {
            floorsAndParkings[f][p] = p + 1;          // присвоить значение
            cout << floorsAndParkings[f][p] << " | "; // сразу показать
        }
        cout << endl
             << "---------------------------------------------------" << endl;
    }

    int floor = 0;        // этаж
    int parkingPlace = 0; // парковочное место
    char exit = '1';      // для выхода из do while

    cout << "Чтобы забронировать паркинг, выберите этаж и место.\n";

    do // внешний do while
    {
        do // встроенный do while для выбора этажа
        {
            cout << "Введите номер этажа: ";
            cin >> floor;

            if (floor < 1 || floor > 7) // если такого этажа нет
            {
                cout << "Такого этажа нет!  Выберите этаж от 1 до 7!\n";
            }
        } while (floor < 1 || floor > 7);

        do // встроенный do while для выбора места
        {
            cout << "Введите номер места парковки: ";
            cin >> parkingPlace;

            if (parkingPlace < 1 || parkingPlace > 10)
            {
                cout << "Такого номера нет! Выберите место от 1 до 10!\n";
            }
        } while (parkingPlace < 1 || parkingPlace > 10);

        if (floorsAndParkings[floor - 1][parkingPlace - 1] != 0) // если место свободно
        {
            floorsAndParkings[floor - 1][parkingPlace - 1] = 0; //  отметить, как забронированное
            cout << "\n\nБронирование прошло успешно!\n";
            cout << "Ваше место парковки: " << floor << "-й этаж " << parkingPlace << "-е место!\n\n";
            cout << "Забронировать еще - нажмите 1. Выйти - 0: ";
            cin >> exit;
        }
        else // если место занято (хранит значение 0)
        {
            cout << "\nМесто занято! Выберите другое!\n";

            // отобразить таблицу, чтобы было видно какие места свободны
            cout << "~~Таблица мест паркинга (0 - место забронировано)~~" << endl
                 << endl;

            for (int f = 0; f < AMOUNT_FLOORS; f++)
            {
                cout << f + 1 << "-й этаж:  ";
                for (int p = 0; p < AMOUNT_PARKINGS; p++)
                {
                    cout << floorsAndParkings[f][p] << " | ";
                }
                cout << endl
                     << "---------------------------------------------------" << endl;
            }
        }
    } while (exit != '0');

    return 0;
}