#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int ft_putstr(char* str)
{
    int i;

    i = -1;
    while(str[++i] != '\0')
    {
        ft_putchar(str[i]);
    }
    return 0;
}

char *ft_strstr(char *str, char *to_find)
{
    int length_substring;
    int n;
    int m;
    int i;
    char *substr;

    length_substring = -1;
    while(to_find[++length_substring] != '\0');  

    n = -1;
    m = -1;
    i = -1;

    substr = malloc(length_substring * sizeof(char));

    while(str[++n] != '\0')
    {
        while(to_find[++m] != '\0')
        {
            if(str[n] == to_find[m])
            {
                substr[++i] = str[n];
            }
        }
    }
    return substr;
}

int main(int argc, char **argv)
{
    ft_putstr(ft_strstr(argv[1], argv[2]));
    ft_putchar('\n');
}
