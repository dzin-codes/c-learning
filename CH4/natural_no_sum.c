#include <stdio.h>

int main()
{
    // first n natural no sum using while loop

    int no;
    int i = 1;
    int sum;
    printf("Enter the no: ");
    scanf("%d", &no);

    while (i <= no)
    {
        printf("%d\n", i);
        sum = sum + i;
        i++;
    }

    printf("The sum of n natural no is: %d", sum);

    return 0;
}