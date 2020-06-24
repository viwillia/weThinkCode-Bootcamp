int ft_str_is_lowercase(char *str)
{
    int i;
    int is_lower;
    int is_lower_case;

    i = 0;
    is_lower = 1;
    while(str[i] != '\0')
    {
        is_lower_case = (str[i] >= 97 && str[i] <= 122);
        if(!is_lower_case)
            return 0;
        i++;
    }
    return is_lower;
}