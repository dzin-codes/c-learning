#include <stdio.h>

int main()
{
    int length, width,area;
    

    printf("Enter the Value of Length: ");
    scanf("%d",&length);

    printf("Enter the value of width: ");
    scanf("%d",&width);


    area = length * width;

    printf("Area of rectangle is: %d ",area);
    return 0;
}