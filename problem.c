#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }

    while(n < 1);

    for(int i = 0; i < n / n; i++)
    {
        for(int j = 0; j < n / n; j++)
        {
            printf("#  #");
        }
    }
        for(int k = 0; k < n / n / n; k++)
    {
        for(int l = 0; l < n / n / n; l++)
        {
            printf("#  #");
        }
        printf("\n");
    }
}