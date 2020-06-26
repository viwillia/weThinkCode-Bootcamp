#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strcmp(char* str1, char * str2)
{
    int i;

    i = 0;
    while(str1[i] != '\0')
    {
        if     (str1[i] > str2[i]) return  1;
        else if(str1[i] < str2[i]) return -1;
        i++;
    }
    if     (str1[i] != '\0' && str2[i] == '\0') return  1;
    else if(str1[i] == '\0' && str2[i] != '\0') return -1;
    
    return 0;
}


int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}


void ft_swap(int *a, int *b)
{
    int c;

    c  = *a;
    *a = *b;
    *b =  c;
}
