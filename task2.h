#pragma once

// Begin19: прямокутник за двома протилежними вершинами
struct TRectangle {
    double x1, y1;
    double x2, y2;
};

double Perimeter(TRectangle R);
double Area(TRectangle R);
void task2a();

// Boolean22: тризначне число
struct TThreeDigit {
    int n;
};

bool IsMonotone(TThreeDigit t);
void task2b();
