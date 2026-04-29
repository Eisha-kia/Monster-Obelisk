#ifndef HOWTOPLAYPAGE_H
#define HOWTOPLAYPAGE_H

#include "iGraphics.h"

extern int gameState;
static unsigned int howToPlayImg = 0;

void drawHowToPlayPage()
{
	if (howToPlayImg == 0) {
		howToPlayImg = iLoadImage("Image//How To Play.png");
	}
	iShowImage(0, 0, 1000, 600, howToPlayImg);
	// Back button is part of the image itself — no drawn button needed
}

void howToPlayPageClick(int mx, int my) {
	// Back button region built into the How To Play image (X: 403-585, Y: 46-93)
	if (mx >= 403 && mx <= 585 && my >= 46 && my <= 93) {
		gameState = 0; // Return to Main Menu (Home Page)
	}
}

#endif
