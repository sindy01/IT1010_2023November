//Lecture 6 Quiz 1 - Slide 7
//Using math functions in C programs 

# include <stdio.h>
# include <math.h>

int main(void)
{
	float x1 = floor (7.5);
	float x2 = floor (0.0);
	float x3 = ceil (-6.4);
	float x4 = pow (5, 2);
	
	printf("%.2f \n",x1);
	printf("%.2f \n",x2);
	printf("%.2f \n",x3);
	printf("%.2f \n",x4);

	return 0;
} 

