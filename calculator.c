#include <stdin.h>
#include <cs50.h>

int main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("the sum is %i/n", x + y);
}