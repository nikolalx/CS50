#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int n;
        do
        {
            n = get_int("Size: ");
        }
    while (n < 1);

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}