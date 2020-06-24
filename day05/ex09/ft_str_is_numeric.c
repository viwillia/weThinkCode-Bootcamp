
int ft_str_is_numeric(char *str)
{
    int i;
    int is_numeric;
    int is_numeric_case;

    i = 0;
    is_numeric = 1;
    while(str[i] != '\0')
    {
        is_numeric_case = (str[i] >= 48 && str[i] <= 57);
        if(!is_numeric_case)
            return 0;
        i++;
    }
    return is_numeric;
}