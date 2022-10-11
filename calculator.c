#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int points = get_int("How many points did your lose? ");
    if (points < 2)
    {
        printf("youve lost viewer points than me\n");
    }
    else if (points > 2)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("weve done grate\n");
    }
}