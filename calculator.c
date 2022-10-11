#include <stdio.h>
#include <cs50.h>

int main (void)
{
    const int MINE = 2;
    int points = get_int("How many points did your lose? ");
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