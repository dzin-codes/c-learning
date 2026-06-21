#include <stdio.h>

int main()
{

    // area of circle = 3.14*rxr;

    int r;
    int h;
    float area_of_circle;
    float p = 3.14;
    float volume_of_cylinder;
    
    printf("Enter the value of Radius: ");
    scanf("%d",&r);
    printf("Enter the value of Height: ");
    scanf("%d",&h);



    area_of_circle = p*r*r;

    printf("The area of circle is : %f\n",area_of_circle);

    volume_of_cylinder = p*r*h;
    printf("The volume of cylinder is: %f",volume_of_cylinder);



    return 0;
}