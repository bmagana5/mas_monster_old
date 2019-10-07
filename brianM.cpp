// Brian Magana
//
#include "fonts.h"
#include <math.h>
#include <GL/glx.h>

void printBriansName(Rect r)
{
    	r.bot = 200;
	r.left = 300;
	ggprint8b(&r, 50, 0x00ffff00, "Brian");
}

void showBriansPict(int x, int y, float tx, float ty, GLuint picid)
{
	int wid = 40;
	float fx = 0.0f;
	static float angle = 0.0f;

	angle += 0.01;
	fx = sin(angle);
	y = y - 40;

	glPushMatrix();
	glTranslatef(x + (int)(fx*30.0), y, 0);
	glColor3s(1.0, 1.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, picid);
	glBegin(GL_QUADS);
		glTexCoord2f(tx, ty+0.5); glVertex2i(-wid, -wid);
		glTexCoord2f(tx, ty); glVertex2i(-wid, wid);
		glTexCoord2f(tx+0.125, ty); glVertex2i(wid, wid);
		glTexCoord2f(tx+0.125, ty+0.5); glVertex2i(wid, -wid);
	glEnd();
	glPopMatrix();
	glBindTexture(GL_TEXTURE_2D, 0);
	glDisable(GL_ALPHA_TEST);
}
