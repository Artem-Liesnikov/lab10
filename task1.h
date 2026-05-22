#pragma once

struct TTime {
    int Hour;
    int Min;
    int Sec;
};

bool CheckTime(TTime T);
void NextHour(TTime& T);
void printTime(TTime T);
void task1();
