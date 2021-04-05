#include <graphics.h>

void drawCircle(int x, int y, int radius, int color, int fillStyle)
{
    setcolor(color);
    setfillstyle(fillStyle, color);
    fillellipse(x, y, radius, radius);
}
