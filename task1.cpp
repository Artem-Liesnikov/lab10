#include "task1.h"
#include <iostream>
using namespace std;

// Перевірка коректності часу в 24-годинному форматі (Param71)
bool CheckTime(TTime T) {
    return T.Hour >= 0 && T.Hour <= 23 &&
           T.Min  >= 0 && T.Min  <= 59 &&
           T.Sec  >= 0 && T.Sec  <= 59;
}

// Param77: змінює час T на +1 годину; якщо час невалідний — не змінює
void NextHour(TTime& T) {
    if (!CheckTime(T)) return;
    T.Hour = (T.Hour + 1) % 24;
}

void printTime(TTime T) {
    cout << (T.Hour < 10 ? "0" : "") << T.Hour << ":"
         << (T.Min  < 10 ? "0" : "") << T.Min  << ":"
         << (T.Sec  < 10 ? "0" : "") << T.Sec;
}

void task1() {
    cout << "\n=== Завдання 1: Param77 — NextHour(T) ===\n";
    cout << "Введіть 5 значень часу (години хвилини секунди):\n";

    for (int i = 1; i <= 5; i++) {
        TTime t;
        cout << "  Час " << i << " (HH MM SS): ";
        cin >> t.Hour >> t.Min >> t.Sec;

        cout << "  До:    ";
        printTime(t);

        if (!CheckTime(t)) {
            cout << "  — невалідний час, не змінюється\n";
        } else {
            NextHour(t);
            cout << "  →  Після NextHour: ";
            printTime(t);
            cout << "\n";
        }
    }
}
