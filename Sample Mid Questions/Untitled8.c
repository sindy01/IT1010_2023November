#include <stdio.h>

int main()
{
	int p = 9, q = 2, r = 2;
	p = q == r && p != q;
	printf("%d",p);
}
