#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int n = get_int("How manz results ?");
    int scores[n];

    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score ");
    }

    printf("Average %f\n", (scores[n] + scores[n]) / (float) n);
}