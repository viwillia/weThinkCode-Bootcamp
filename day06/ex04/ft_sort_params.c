#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

void putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
}

int strcmp(char* str1, char * str2)
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

int main(int argc, char const *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        putstr((char*) argv[i]);
        putchar('\n');
        i++;
    }
    return 0;
}
