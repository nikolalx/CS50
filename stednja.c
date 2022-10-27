#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main(void)
{
    int N = get_int("Nikolina: ");
    int L = get_int("Lucina: ");
    /*ukupna zajednicka stednja*/
    int Z = N + L;

    printf("%i\n", Z);
}