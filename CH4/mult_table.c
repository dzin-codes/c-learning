#include <stdio.h>

int main() {
    //Multiplication table

    int no;
    printf("enter the number: ");
    scanf("%d",&no);

    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d = %d\n",no,i,no*i);
    }
    
    return 0;
}