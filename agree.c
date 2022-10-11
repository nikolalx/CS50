#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //prompt user to agree to something
    char c = get_char("do you agree? ");
    //check wheter user agreed
    if (c == "y")
    {
        printf("agreed\n");
    }
    else if (c == "n")
    {
        printf("does not agree\n");
    }
}