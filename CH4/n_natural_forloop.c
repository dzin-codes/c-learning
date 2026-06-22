#include <stdio.h>

int main() {
    //write first natural no using for loop

    int no;
    printf("Enter the number:");
    scanf("%d",&no);
    for ( int i = 0; i <= no; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}