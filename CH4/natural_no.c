#include <stdio.h>

int main() {
    //print natural no from 10 to 20  when initiliz look  counter is initialized to 0

    int i=0;
    printf("Enter the number: ");
    scanf("%d",&i);

    
    while ((i>=10)&&(i<=20))
    {
        printf("%d\t",i);
        i++;
    }
    

    
    return 0;
}