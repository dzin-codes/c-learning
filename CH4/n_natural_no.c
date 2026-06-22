#include <stdio.h>

int main()
{
    // write a first n natural numbberr using do while loop

    int i=1;
    int no;
    printf("Enter the no: ");
    scanf("%d", &no);

    do
    {
        printf("no: %d\n", i);
        i++;
    } while (i<=no);

    return 0;
}