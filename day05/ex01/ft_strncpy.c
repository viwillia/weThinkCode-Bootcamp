
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[n] = '\0';
    return dest;
}