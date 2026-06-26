#include <stdio.h>
int sum(int a, int b);
int main()
{
    // program to add 2 numbre and sum it  using function
    int a;
    //int x = 3, y = 5;
    a = sum(3,5);
    printf("The sum of a and b is: %d", a);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}