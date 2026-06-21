#include <stdio.h>

int main()
{
    //The formula to convert Celsius (°C) to Fahrenheit (°F) is:

    int Fahrenheit,Celsius;

    printf("Enter the value of Celsius:");
    scanf("%d",&Celsius);

    Fahrenheit = (Celsius*1.8)+32;
    printf("The Fahrenheit temrature is: %d",Fahrenheit);

    return 0;
}