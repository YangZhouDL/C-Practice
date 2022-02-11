#pragma once
#include "Clock.h"
class NewClock :
    public Clock
{
    bool morning;
public:
    NewClock(int h, int m, int s);
    NewClock(NewClock &);
    virtual ~NewClock();
    void AddOneSecond();
    void DispTime();
    void CheckTime();
};

