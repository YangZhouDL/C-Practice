#include "EllipseClock.h"
#include"acllib.h"
#include"math.h"
EllipseClock::EllipseClock(int x, int y, int w, int h) :Clock(),Shape(x,y,w,h)
{

}
EllipseClock::EllipseClock(int z, int h, int m, int s, int x, int y, int width, int height): Clock(z,h,m,s), Shape(x, y, width, height)
{

}
EllipseClock::~EllipseClock()
{

}
void EllipseClock::DispTime()
{
	int h, m, s;
	int x, y, width, height;
	GetShapeData(x, y, width, height);
	int ox = x + width / 2;
	int oy = y + width / 2;

	int min = width < height ? width : height;
	int hl = min / 4 - min / 7;
	int ml = min / 3 - min / 6;
	int sl = min / 2 - min / 5;
	GetTime(h, m, s);

	//circle
	setPenWidth(2);
	setPenColor(BLACK);
	setBrushColor(WHITE);
	ellipse(x, y, x + width, y + height);

	//label
	setPenWidth(1);
	setPenColor(BLACK);
	int len1 = min / 2 - min / 8, len2 = len1 + 10;
	for (int i = 0; i < 12; ++i)
	{
		moveTo(ox + len1 * sin(rad * (180 - i * 30)), oy + len1 * cos(rad * (180 - i * 30)));
		lineTo(ox + len2 * sin(rad * (180 - i * 30)), oy + len2 * cos(rad * (180 - i * 30)));
	}

	//hour
	setPenWidth(8);
	setPenColor(BLACK);
	moveTo(ox, oy);
	lineTo(ox + hl * sin(rad * (180 - h * 30)), oy + hl * cos(rad * (180 - h * 30)));

	//minute
	setPenWidth(4);
	setPenColor(GREEN);
	moveTo(ox, oy);
	lineTo(ox + ml * sin(rad * (180 - m * 6)), oy + ml * cos(rad * (180 - m * 6)));

	//second
	setPenWidth(2);
	setPenColor(RED);
	moveTo(ox, oy);
	lineTo(ox + sl * sin(rad * (180 - s * 6)), oy + sl * cos(rad * (180 - s * 6)));
}