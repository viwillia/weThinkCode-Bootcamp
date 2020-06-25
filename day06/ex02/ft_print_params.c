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
