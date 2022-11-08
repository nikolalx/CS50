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

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            printf("#");
        }
    printf("\n");
    }
}