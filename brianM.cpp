#include "fonts.h"

void printBriansName(Rect r)
{
	ggprint8b(&r, 16, 0x00ffff00, "Brian");
}
