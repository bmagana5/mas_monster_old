#include "fonts.h"
#include <stdio.h>

void printAngela(Rect r)
{
    	r.bot = 300;
	r.left = 300;
	ggprint8b(&r, 50, 0x00ffff00, "Angela");
}
