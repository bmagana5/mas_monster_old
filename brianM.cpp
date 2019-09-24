#include "fonts.h"
#include <stdio.h>
void printBriansName(Rect r)
{
    	r.bot = 200;
	r.left = 300;
	ggprint8b(&r, 50, 0x00ffff00, "Brian");
	//ggprint8b(&r, 50, 0x00ffff00, "Gracelove");
}
