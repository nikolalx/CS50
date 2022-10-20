#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int score1 = get_int("Score for first: ");
    int score2 = get_int("Score for second: ");
    int score3 = get_int("Score for third: ");

    int n = score1 + score2 + score3;

    printf("Average %f\n", (score1 + score2 + score3) / (float) n);
}