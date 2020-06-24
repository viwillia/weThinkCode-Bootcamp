char *ft_strupcase(char *str)
{
    int length;
    char *lower;

    length = 0;
    while(str[length] != '\0')
        length++;

    lower = malloc(length * sizeof(char));
    length = 0;
    while(str[length] != '\0')
    {
        lower[length] = str[length];

        if(str[length] >= 65 && str[length] <= 90)
            lower[length] = str[length] + 32;

        length++;
    }
    lower[length] = '\0';
    return lower;
}