// masonP.cpp.
// Render my name within the asteroids game.

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


