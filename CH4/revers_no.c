#include <stdio.h>

int main() {
    // print no in revers order using for loop get input from user

    int no;

    printf("Enter the no: ");
    scanf("%d",&no);

    for (int i = no; i > 0; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}