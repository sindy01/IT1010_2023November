//Lecture 3 - More Examples on Implicit & Explicit Coversions

#include <stdio.h>

int main() 
{
    int x = 10;
    char y = 'a';
    
    x = x + y;
    printf("%d\n", x);
    
    int z = (int)(x / 5.00);
    printf("%d", z);
    
    return 0;
}

