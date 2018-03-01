// masonP.cpp.
// Render my name within the asteroids game.

#include "GL/glx.h"
#include "fonts.h"

void showName()
{
		Rect r;
		glClear(GL_COLOR_BUFFER_BIT);
		//
		r.bot = 100;
		r.left = 10;
		r.center = 0;
		ggprint8b(&r, 16, 0x00ff0000, "Mason Pierce");
}

// Draw a box with my Name in it.
void drawBox(int x, int y) 
{
		static float angle = 0.0;
		glColor3ub(255, 0, 0);
		glPushMatrix();
		glTranslatef(x, y, 0.0);
		glRotatef(angle, 0.0f, 0.0f, 1.0f); // X axis, y axis , z axis.
		glTranslatef(-50.0, -50.0, 0);
		angle += 1.5;
		glBegin(GL_QUADS);
			glVertex2i(0, 0);
			glVertex2i(0, 100);
			glVertex2i(100, 100);
			glVertex2i(100, 0);
		glEnd();

		Rect r;
        r.bot = 50;
        r.left = 50;
        r.center = 1;
        ggprint8b(&r, 16, 0x00ffffff, "Mason Pierce");;

		glPopMatrix();
}


