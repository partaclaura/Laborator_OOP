#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	for (int i = 0; i < width; i++)
		for (int j = 0; j < height; j++)
			canvas[i][j] = ' ';
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
		for (int j = top; j <= bottom; j++)
			if (i == left || i == right || j == top || j == bottom)
				canvas[i][j] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left + 1; i < right; i++)
		for (int j = top + 1; j < bottom; j++)
			canvas[i][j] = ch;
}

void Canvas::Print()
{
	for (int i = 0; i < this->width; i++)
	{
		for (int j = 0; j < height; j++)
			cout << canvas[i][j] << ' ';
		cout << '\n';
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < this->width; i++)
		for (int j = 0; j < this->height; j++)
			canvas[i][j] = ' ';
}