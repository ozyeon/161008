#pragma once

#include <GLFW/glfw3.h>
#include <chrono>
#define _USE_MATH_DEFINES
#include <math.h>

const int width = 640;
const int height = 480;

float* pixels = new float[width*height * 3];
GLFWwindow* window;

void drawPixel(const int& i, const int& j, const float& red, const float&green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}

/*
void getMousePoint(GLFWwindow* window)
{
double xpose, ypose;
glfwGetCursorPos(window, &xpos, &ypos);
}
*/
bool isInsideCircle(const double x, const double y, const double x_c, const double y_c, const double r)
{
	const double f = (x - x_c)*(x - x_c) + (y - y_c)*(y - y_c) - r*r;

	if (f > 0.0) return false;

	else
	{
		printf("1\n");
		return true;
	}
}

void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue)
{
	for (int i = i0; i <= i1; i++)
	{
		const int j = (j1 - j0)*(i - i0) / (i1 - i0) + j0;

		drawPixel(i, j, red, green, blue);
	}
}

void drawnline(const int& in0, const int& jn1, const int& jn2, const float& red, const float& green, const float& blue)
{
	for (int j = jn1; j <= jn2; j++)
	{
		drawPixel(in0, j, red, green, blue);
	}
}

void drawThicknerLine(const int& thickness, const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue) {

	for (int i = 0; i < thickness; i++)
		drawLine(i0 + i, j0, i1 + i, j1, red, green, blue);
}

void drawCircle(double xpos, double ypos, double rad, const int& i0, const int& j0, float red, float green, float blue) {
	bool color = isInsideCircle(xpos, 500 - ypos, i0, j0, rad);
	if (color == true)
	{
		red = 1.0f;
		blue = 0.0f;
	}
	for (int i = 0; i<20; i++)
	{
		rad = rad + i*0.01;
		for (double i = 0.0; i < 360.0; i += 0.1)
		{
			double angle = i *  M_PI / 180;

			int x = (int)(i0 + rad * cos(angle));
			int y = (int)(j0 + rad * sin(angle));

			drawPixel(x, y, red, green, blue);
		}
	}

}