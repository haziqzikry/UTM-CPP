#include <graphics.h>
#include <cstdlib>
#include <ctime>
#include "draw.h"

int main()
{
    int screenWidth = getmaxwidth();
    int screenHeight = getmaxheight();
    int x, y, radius, color;

    initwindow(screenWidth, screenHeight, "An example of graphical program using WinBGIm library");

    srand(time(NULL));
    while (!kbhit())
    {
        x = rand() % screenWidth;
        y = rand() % screenHeight;
        radius = rand() % ((screenHeight / 4) + 50);
        color = COLOR(rand() % 255, rand() % 255, rand() % 255);

        drawCircle(x, y, radius, color);

        delay(100);
    }

    getch();

    return 0;
}
