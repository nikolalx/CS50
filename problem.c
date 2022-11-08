#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Heigth: ");
    }

    while(n < 1);

    for(int i = n + n - 1; i < n; i++)
    {
            printf("#");
    }
    printf("\n");
}