//Lecture 3 - More Examples on Implicit & Explicit Coversions

#include <stdio.h>

int main()
{
    double a = 21.09399;
    float b = 10.20;
    int c;

    c = (int)a;
    printf("%d\n", c);

    c = (int)b;
    printf("%d", c);

    return 0;
}

