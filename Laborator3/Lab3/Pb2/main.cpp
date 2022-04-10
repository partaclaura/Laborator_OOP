#include "Canvas.h"

int main()
{
	Canvas canv(10, 10);
	canv.DrawRect(2, 2, 8, 9, '#');
	canv.FillRect(2, 2, 8, 9, '*');
	canv.Print();
	
	return 0;
	
}