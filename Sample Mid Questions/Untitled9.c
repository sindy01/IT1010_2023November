#include <stdio.h>

int main()
{
	int p = 4, q = 6, r = 4;
	p = q == r && p != q;
	printf("%d",p);

}
