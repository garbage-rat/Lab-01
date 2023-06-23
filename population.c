#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

     int x;

       do
       {
        x = get_int("start:");
       }

       while (x < 9);


    // TODO: Prompt for end size

       int y;

       do
       {
        y = get_int("end: ");
       }

       while (y < x);


    // TODO: Calculate number of years until we reach threshold

        int z;

    z = y - x / (x/3 - x/4);

    // TODO: Print number of years

        printf("%d years\n", z);
}
