//Tutorial 6 Exercise 1

//Practice to use math library functions

#include <stdio.h>
#include <math.h>

int main() 
{
    
    float x1 = floor(7.5);
    printf("x1 = %.2f\n", x1); 

    float x2 = ceil(0.0);
    printf("x2 = %.2f\n", x2); 

    float x3 = ceil(-6.4);
    printf("x3 = %.2f\n", x3); 

    float x4 = log10(100.0); 
    printf("x4 = %.2f\n", x4); 

    float x5 = ceil(floor(-5.5));
    printf("x5 = %.2f\n", x5); 

    return 0;
}

