#include <stdio.h>

int main()
{
	int g = 24, h = 6;
	g = g - h;
	++g;
	printf("%d", g++);
}
