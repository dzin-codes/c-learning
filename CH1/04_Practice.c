#include <stdio.h>

int main()
{
    /* Calculate simple interest  */
    //formula = SI= (PxRxT)/100

    int principal_amount,year;
    float rate_of_interest;
    float SI;

        printf("Enter the principal amount:   ");
        scanf("%d",&principal_amount);

        printf("Enter the rate of interest: ");
        scanf("%f",&rate_of_interest);

        printf("Enter the year: ");
        scanf("%d",&year);

        SI = (principal_amount*rate_of_interest*year)/100;

        printf("The simple interst is:%f ",SI);

    

    return 0;
}