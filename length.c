#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int string_length(string s);
    string name = get_string("Name: ");
    int i = 0;
    int length = string_length(name);
}

int string_length(string s)
{
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}