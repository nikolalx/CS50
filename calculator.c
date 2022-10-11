#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int points = get_int("How many points did i lose? ");
    const int MINE = points;
    int his = get_int("How many points did you lose? ");
    if (his < MINE)
    {
        printf("youve lost viewer points than me\n");
    }
    else if (his > MINE)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("weve done grate\n");
    }
}