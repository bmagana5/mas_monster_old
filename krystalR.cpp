//hi this is my source code
#include "fonts.h"
extern void printBriansName(Rect);
extern void displayGracelove(Rect);
extern void printAngela(Rect);
void printKrystal(Rect);

void showCredits(Rect r)
{
	printBriansName(r);
	displayGracelove(r);
	printAngela(r);
	printKrystal(r);
}

void printKrystal(Rect r)
{
	r.bot = 150;
	r.left = 300;
	ggprint8b(&r, 50, 0x00ffff00, "Krystal");
}
