#include <stdio.h>
#include <stdlib.h>

char *ft_strstr(char *str, char *to_find)
{
    char *substr;
    int length_substring;
    int n;
    int m;

    length_substring = 0;
    while(to_find[length_substring++] != '\0');

    substr = malloc(length_substring * sizeof(char));
    n = 0;
    m = 0;
    while(str[m] != '\0')
    {
        if(str[m] == to_find[n])
        {
            substr[n++] = str[m];
        }
        m++;
    }

    if(to_find[length_substring - 1] != substr[length_substring - 1])
        return NULL;

    return substr;
}

int ft_strcmp(char *s1, char *s2)
{
    char *first;
    char *second;

    first = ft_strstr(s1, s2);
    second = ft_strstr(s2, s1);
    
    if(first == NULL)
        return -1;

    else if(second == NULL)
        return 1;
    else
        return 0;
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{

}