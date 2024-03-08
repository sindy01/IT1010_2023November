#include <stdio.h>

int main()
{
	int p = 5;
	if (p++ > 0)
	   if (++p < 7)
	   {
	      ++p;
	      printf("if");
	   }
	   else
	      printf("else");
}
