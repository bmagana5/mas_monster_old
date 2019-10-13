// Brian Magana
// 
// four steps of debugging:
// 	1. identify the bug
// 		- figure out where it's located and why it's happening
// 	2. isolate the bug
// 		- separate buggy code from main code and test it
// 	3. fix it
// 	4. review that the fix is working properly
#include "fonts.h"
#include <math.h>
#include <string.h>
#include <GL/glx.h>

void printBriansName(Rect r)
{
    	r.bot = 200;
	r.left = 300;
	ggprint8b(&r, 50, 0x00ffff00, "Brian");
}

void parseScores(Rect r, char *buf, char *tmp)
{
	int i = 0;
	while (i < (int)strlen(buf)) {
		if (buf[i] == '*') {
			i++;
			while (buf[i] != '&') {
				strncat(tmp, &buf[i], 1);
				i++;
			}
			strcat(tmp, "\n");
			ggprint12(&r, 20, 0xffff0000, tmp);
			strcpy(tmp, "");
		} else i++;
	}
}
