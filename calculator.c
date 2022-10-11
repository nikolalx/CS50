#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int mine = 2;
    int points = get_int("How many points did your lose? ");
    if (points < mine)
    {
        printf("youve lost viewer points than me\n");
    }
    else if (points > mine)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("weve done grate\n");
    }
}