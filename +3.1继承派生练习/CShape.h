#pragma once
class CShape
{
protected:
	int x, y, width, height;
public:
	CShape(int x, int y, int width, int height);
	~CShape(void);
	void GetShapeData(int &x, int &y, int &width, int &height);
	void DrawShape() {};
	void DrawTick(int h, int m, int s);
};

