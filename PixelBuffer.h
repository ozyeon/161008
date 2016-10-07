#pragma once

#include "Pixel.h"

void drawOnPixelBuffer(double xpos, double ypos)
{
	for (int i = 0; i < width * height; i++)
	{
		pixels[i * 3 + 0] = 1.0f; // red 
		pixels[i * 3 + 1] = 1.0f; // green
		pixels[i * 3 + 2] = 1.0f; // blue
	} // White Background

	const int i = rand() % width, j = rand() % height;
	drawPixel(i, j, 0.0f, 0.0f, 0.0f);

	for (int i = 0; i<5; i++)
		drawCircle(xpos, ypos, 50, 80 + i * 120, 420, 0.0f, 0.0f, 1.0f);
	for (int i = 0; i<5; i++)
		drawCircle(xpos, ypos, 50, 80 + i * 120, 300, 0.0f, 0.0f, 1.0f);
	for (int i = 0; i<5; i++)
		drawCircle(xpos, ypos, 50, 80 + i * 120, 180, 0.0f, 0.0f, 1.0f);
	for (int i = 0; i<5; i++)
		drawCircle(xpos, ypos, 50, 80 + i * 120, 60, 0.0f, 0.0f, 1.0f);

	const int thickness = 10;
	drawThicknerLine(thickness, 54, 400, 100, 440, 0.0f, 0.0f, 1.0f);
	drawThicknerLine(thickness, 54, 160, 100, 200, 0.0f, 0.0f, 1.0f);

	//drawCircle
	drawCircle(0, 0, 15, 200, 420, 0.0f, 0.0f, 1.0f);
	drawCircle(0, 0, 13, 200, 420, 0.0f, 0.0f, 1.0f);
	drawCircle(0, 0, 15, 200, 180, 0.0f, 0.0f, 1.0f);
	drawCircle(0, 0, 13, 200, 180, 0.0f, 0.0f, 1.0f);

	//drawSquare
	drawLine(300, 400, 340, 400, 0.0f, 0.0f, 1.0f);
	drawLine(300, 440, 340, 440, 0.0f, 0.0f, 1.0f);
	drawnline(300, 400, 440, 0.0f, 0.0f, 1.0f);
	drawnline(340, 400, 440, 0.0f, 0.0f, 1.0f);
	drawLine(300, 160, 340, 160, 0.0f, 0.0f, 1.0f);
	drawLine(300, 200, 340, 200, 0.0f, 0.0f, 1.0f);
	drawnline(300, 160, 200, 0.0f, 0.0f, 1.0f);
	drawnline(340, 160, 200, 0.0f, 0.0f, 1.0f);

	//drawX
	drawLine(420, 400, 460, 440, 0.0f, 0.0f, 1.0f);
	drawLine(420, 440, 460, 400, 0.0f, 0.0f, 1.0f);
	drawLine(420, 160, 460, 200, 0.0f, 0.0f, 1.0f);
	drawLine(420, 200, 460, 160, 0.0f, 0.0f, 1.0f);

	//drawarrow1
	drawnline(560, 400, 450, 0.0f, 0.0f, 1.0f);
	drawLine(545, 415, 560, 400, 0.0f, 0.0f, 1.0f);
	drawLine(560, 400, 575, 415, 0.0f, 0.0f, 1.0f);
	drawnline(560, 160, 210, 0.0f, 0.0f, 1.0f);
	drawLine(545, 175, 560, 160, 0.0f, 0.0f, 1.0f);
	drawLine(560, 160, 575, 175, 0.0f, 0.0f, 1.0f);

	//drawrrow2
	drawLine(55, 295, 105, 295, 0.0f, 0.0f, 1.0f);
	drawLine(90, 310, 105, 295, 0.0f, 0.0f, 1.0f);
	drawLine(90, 280, 105, 295, 0.0f, 0.0f, 1.0f);
	drawLine(55, 55, 105, 55, 0.0f, 0.0f, 1.0f);
	drawLine(90, 70, 105, 55, 0.0f, 0.0f, 1.0f);
	drawLine(90, 40, 105, 55, 0.0f, 0.0f, 1.0f);

	//drawA
	drawLine(185, 295, 215, 295, 0.0f, 0.0f, 1.0f);
	drawLine(185, 294, 215, 294, 0.0f, 0.0f, 1.0f);
	drawLine(175, 275, 200, 327, 0.0f, 0.0f, 1.0f);
	drawLine(200, 327, 225, 275, 0.0f, 0.0f, 1.0f);
	drawLine(176, 275, 201, 327, 0.0f, 0.0f, 1.0f);
	drawLine(201, 327, 226, 275, 0.0f, 0.0f, 1.0f);
	drawLine(185, 55, 215, 55, 0.0f, 0.0f, 1.0f);
	drawLine(185, 54, 215, 54, 0.0f, 0.0f, 1.0f);
	drawLine(175, 35, 200, 87, 0.0f, 0.0f, 1.0f);
	drawLine(200, 87, 225, 35, 0.0f, 0.0f, 1.0f);
	drawLine(176, 35, 201, 87, 0.0f, 0.0f, 1.0f);
	drawLine(201, 87, 226, 35, 0.0f, 0.0f, 1.0f);

	//draw|
	drawnline(320, 270, 330, 0.0f, 0.0f, 1.0f);
	drawnline(320, 30, 90, 0.0f, 0.0f, 1.0f);

	//drawarrow3
	drawLine(410, 295, 470, 295, 0.0f, 0.0f, 1.0f);
	drawLine(410, 295, 425, 310, 0.0f, 0.0f, 1.0f);
	drawLine(410, 295, 425, 280, 0.0f, 0.0f, 1.0f);
	drawLine(410, 55, 470, 55, 0.0f, 0.0f, 1.0f);
	drawLine(410, 55, 425, 70, 0.0f, 0.0f, 1.0f);
	drawLine(410, 55, 425, 40, 0.0f, 0.0f, 1.0f);

	//drawarrow4
	drawnline(560, 275, 325, 0.0f, 0.0f, 1.0f);
	drawLine(545, 310, 560, 325, 0.0f, 0.0f, 1.0f);
	drawLine(560, 325, 575, 310, 0.0f, 0.0f, 1.0f);
	drawnline(560, 35, 85, 0.0f, 0.0f, 1.0f);
	drawLine(545, 70, 560, 85, 0.0f, 0.0f, 1.0f);
	drawLine(560, 85, 575, 70, 0.0f, 0.0f, 1.0f);

}