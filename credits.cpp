#include "fonts.h"
#include <GL/glx.h>
extern void printBriansName(Rect);
extern void displayGracelove(Rect);
extern void printAngela(Rect);
void printKrystal(Rect);
//extern void showPicture(int, int, float, GLuint);

void credits(Rect r/*, int x, int y, float tx, GLuint textid*/)
{


    printBriansName(r);
    displayGracelove(r);
    printAngela(r);
    printKrystal(r);
    //showPicture(x, y, tx, textid);
}

