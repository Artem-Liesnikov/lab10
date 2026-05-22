#include "task2.h"
#include <iostream>
#include <cmath>
using namespace std;

// Begin19: периметр прямокутника за координатами двох протилежних вершин
double Perimeter(TRectangle R) {
    return 2.0 * (fabs(R.x2 - R.x1) + fabs(R.y2 - R.y1));
}

// Begin19: площа прямокутника
double Area(TRectangle R) {
    return fabs(R.x2 - R.x1) * fabs(R.y2 - R.y1);
}

void task2a() {
    cout << "\n=== Завдання 2а: Begin19 — Периметр і площа прямокутника ===\n";
    TRectangle r;
    cout << "Введіть координати першої вершини  (x1 y1): ";
    cin >> r.x1 >> r.y1;
    cout << "Введіть координати другої вершини  (x2 y2): ";
    cin >> r.x2 >> r.y2;

    cout << "Периметр P = " << Perimeter(r) << "\n";
    cout << "Площа    S = " << Area(r)      << "\n";
}

// Boolean22: перевіряє, чи утворюють цифри тризначного числа
// зростаючу (d1<d2<d3) або спадаючу (d1>d2>d3) послідовність
bool IsMonotone(TThreeDigit t) {
    int n = abs(t.n);
    int d1 = n / 100;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;
    return (d1 < d2 && d2 < d3) || (d1 > d2 && d2 > d3);
}

void task2b() {
    cout << "\n=== Завдання 2б: Boolean22 — Цифри тризначного числа ===\n";
    TThreeDigit t;
    cout << "Введіть тризначне число: ";
    cin >> t.n;

    int n = abs(t.n);
    if (n < 100 || n > 999) {
        cout << "Помилка: число має бути тризначним (100–999)!\n";
        return;
    }

    int d1 = n / 100, d2 = (n / 10) % 10, d3 = n % 10;
    cout << "Цифри: " << d1 << ", " << d2 << ", " << d3 << "\n";
    cout << "Цифри утворюють зростаючу або спадаючу послідовність: "
         << (IsMonotone(t) ? "true" : "false") << "\n";
}
