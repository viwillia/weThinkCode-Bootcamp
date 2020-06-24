int ft_str_is_printable(char *str)
{
    int i;
    int is_printable;
    int is_printable_character;

    i = 0;
    is_printable = 1;
    while(str[i] != '\0')
    {
        is_printable_character = (str[i] >= 32 && str[i] <= 63 || str[i] >= 96 && str[i] <= 127);
        if(!is_printable_character)
            return 0;
        i++;
    }
    return is_printable;
}