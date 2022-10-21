#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int string_length(string s);
    string name = get_string("Name: ");

    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}