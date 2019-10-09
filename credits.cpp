#include "fonts.h"
#include <GL/glx.h>
extern void printBriansName(Rect);
extern void displayGracelove(Rect);
extern void printAngela(Rect);
void printKrystal(Rect);

void credits(Rect r)
{


    printBriansName(r);
    displayGracelove(r);
    printAngela(r);
    printKrystal(r);
}

