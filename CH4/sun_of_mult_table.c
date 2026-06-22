#include <stdio.h>

int main() {
    //Multiplication table

    int no;
    int sum=0;
    printf("enter the number: ");
    scanf("%d",&no);

    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d = %d\n",no,i,no*i);
        sum = sum+no*i;
    }

    printf("Sum of Table %d is : %d ",no,sum);
    
    return 0;
}