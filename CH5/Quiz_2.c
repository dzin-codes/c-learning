#include <stdio.h>
#include <math.h>

float area_of_square(int a);

int main()
{
    // Use the library function  to calculatethe area of square with a
    float x = 4;

    printf("The power of x is: %f", area_of_square(x));

    return 0;
}

float area_of_square(int a)
{
    return pow(a, 2);
}