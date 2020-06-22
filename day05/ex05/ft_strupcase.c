#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }
    printf("%c\n", str);
    return str;
}

int main()
{
    printf("%d\n", (int) 'R');
    return 0;
}