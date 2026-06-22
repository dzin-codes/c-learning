#include <stdio.h>

int main()
{
    // find a gratest no of 4 number entered by the user

    int no1, no2, no3, no4;
    printf("Enter the no 1: ");
    scanf("%d", &no1);
    printf("Enter the no 2: ");
    scanf("%d", &no2);
    printf("Enter the no 3: ");
    scanf("%d", &no3);
    printf("Enter the no 4: ");
    scanf("%d", &no4);

    printf("4 no are: %d %d %d %d \n ", no1, no2, no3, no4);

    if (no1 > no2 && no1 > no3 && no1 > no4)
    {
        printf("no1 is greatest");
    }
    else if (no2 > no3 && no2 > no4 && no2 > no1)
    {
        printf("no2 is greatest");
    }
    else if (no3 > no2 && no3 > no4 && no3 > 1)
    {
        printf("no3 is greatest");
    }
    else
    {
        printf("\nno 4 is Greatest");
    }

    return 0;
}