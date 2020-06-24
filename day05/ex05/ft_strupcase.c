char *ft_strupcase(char *str)
{
    int length;
    char *upper;

    length = 0;
    while(str[length] != '\0')
        length++;

    upper = malloc(length * sizeof(char));
    length = 0;
    while(str[length] != '\0')
    {
        upper[length] = str[length];

        if(str[length] >= 97 && str[length] <= 122)
            upper[length] = str[length] - 32;

        length++;
    }
    upper[length] = '\0';
    return upper;
}