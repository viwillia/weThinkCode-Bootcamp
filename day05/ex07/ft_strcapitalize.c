char *ft_strcapitalize(char *str)
{
    int length;
    char *capital;

    length = 0;
    while(str[length] != '\0')
        length++;

    capital = malloc(length * sizeof(char));
    length = 0;
    while(str[length] != '\0')
    {
        capital[length] = str[length];

        if(str[length] >= 97 && str[length] <= 122)
        {
            if(length == 0)
               capital[length] = str[length] - 32;
            else if(
                str[length - 1] == 32 ||
                str[length - 1] == 43 ||
                str[length - 1] == 45
            ) capital[length] = str[length] - 32;
        }

        length++;
    }
    capital[length] = '\0';
    return capital;
}