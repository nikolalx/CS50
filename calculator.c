#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int points = get_int("How many points did your lose? ");
    const int MINE = points;
    if (points < MINE)
    {
        printf("youve lost viewer points than me\n");
    }
    else if (points > MINE)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("weve done grate\n");
    }
}