#include <stdio.h>
void good_morning();
void good_afternoon();
void good_evening();

int main()
{
    good_morning();

    good_afternoon();

    good_evening();

    return 0;
}
void good_morning()
{
    printf("Good Morning Folks\n");
}

void good_afternoon()
{
    printf("Good afternoon Folks\n");
}

void good_evening()
{
    printf("Good evening Folks\n");
}