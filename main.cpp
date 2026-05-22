// main.cpp
// Лабораторна робота №10 — Структури даних на C++
// Варіант: Лєсніков Артем Олександрович, група 319
//   Завдання 1  (Табл.1, Param77):   NextHour — змінити TTime на +1 годину
//   Завдання 2а (Табл.2, Begin19):   периметр і площа прямокутника
//   Завдання 2б (Табл.3, Boolean22): цифри тризначного числа — зростаюча/спадаюча

#include <iostream>
#include <limits>
#ifdef _WIN32
#include <windows.h>
#endif
#include "task1.h"
#include "task2.h"
using namespace std;

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
#endif
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "  ЛР №10 — Структури даних на C++\n";
        cout << "  Лєсніков Артем Олександрович, гр.319\n";
        cout << "========================================\n";
        cout << "1. Завдання 1:  Param77   — NextHour\n";
        cout << "2. Завдання 2а: Begin19   — Прямокутник (периметр, площа)\n";
        cout << "3. Завдання 2б: Boolean22 — Цифри тризначного числа\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Введіть ціле число!\n";
            choice = -1;
            continue;
        }

        switch (choice) {
            case 1: task1();  break;
            case 2: task2a(); break;
            case 3: task2b(); break;
            case 0: cout << "До побачення!\n"; break;
            default: cout << "Невірний вибір. Введіть 0-3.\n";
        }

    } while (choice != 0);

    return 0;
}
