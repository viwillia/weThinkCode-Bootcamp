int ft_str_is_uppercase(char *str)
{
    int i;
    int is_upper;
    int is_upper_case;

    i = 0;
    is_upper = 1;
    while(str[i] != '\0')
    {
        is_upper_case = (str[i] >= 65 && str[i] <= 90);
        if(!is_upper_case)
            return 0;
        i++;
    }
    return is_upper;
}