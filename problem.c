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

    for(int i = 0; i < n / n; i++)
    {
            printf("   #");
            printf("  ");
            printf("#");
    }
                printf("\n");
            for(int j = 0; j < n + 1; j++)
            {
                printf("  #");
                printf("  ");
                printf("#");
            }
}