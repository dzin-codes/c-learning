#include <stdio.h>

int main()
{
    // print multiplication table in reverse order

    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    for (int i = 10; i >= 1; i--)
    {
        printf("%dx%d = %d\n", no, i, no * i);
    }

    return 0;
}