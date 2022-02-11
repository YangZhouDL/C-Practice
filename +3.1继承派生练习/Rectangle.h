#pragma once
#include "CShape.h"
class Rectangle :
    public CShape
{
    Rectangle(int x, int y, int w, int h);
    ~Rectangle(void);
    void DrawShape();
};

