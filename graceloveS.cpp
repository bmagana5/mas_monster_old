// Gracelove Simons
//
// Debugging Quiz
// 1. reproduce bug
// 2. locate the bad code
// 3. fix the code
// 4. test the fix and the whole program

#include "fonts.h"
#include <stdio.h>
#include <GL/glx.h>
#include <math.h>
void displayGracelove(Rect r)
{
    	r.bot = 250;
	r.left = 300;
	ggprint8b(&r, 50, 0x00ffff00, "Gracelove");
}

void showPicture(GLuint textid, int xoff, int yoff)
{
    int wid = 40;
    
    //float fx = 0.0f;
    //static float angle = 0.0f;

    //angle += 0.01;
    //fx = sin(angle);
    //y = y - 40;

    glPushMatrix();
    //glTranslatef(x + (int)(fx*30.0),y,0);
    glColor3f(1.0, 1.0, 1.0);
    glBindTexture(GL_TEXTURE_2D, textid);
    glBegin(GL_QUADS);
    	glTexCoord2f(0.0f, 1.0f);	glVertex2i(-wid+xoff, -wid+yoff);
    	glTexCoord2f(0.0f, 0.0f);	glVertex2i(-wid+xoff, wid+yoff);
    	glTexCoord2f(1.0f, 0.0f);	glVertex2i(wid+xoff, wid+yoff);
    	glTexCoord2f(1.0f, 1.0f);	glVertex2i(wid+xoff, -wid+yoff);
    glEnd();
    glPopMatrix();
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_ALPHA_TEST);
}
