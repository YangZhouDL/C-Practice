#pragma once
class Triangle
{
private:
	int x, y, z;
public:
	/*Triangle(float a, float b, float c);*/
	bool Judge(float a, float b, float c);
	float Area(float a, float b, float c);
	float Circle(float a, float b, float c);
	/*void Display();*/
	~Triangle();
};

