#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if ((year < 1582 && year % 4 == 0) || ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
    {
        printf("I can participate in LCPC\n");
    }
    else
    {
        printf("I have to travel back to the past\n");
    }

    return 0;
}
