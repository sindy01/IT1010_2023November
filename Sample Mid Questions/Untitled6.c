#include <stdio.h>

int main()
{
	int m = 21;
	while (m<27)
	{
	   if (m >= 23 && m <= 25)
	   {
	       m++;
	       continue;
	   }
	   printf("%d  ", m);
	   m++;
	}


}
