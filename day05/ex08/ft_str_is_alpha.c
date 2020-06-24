
int ft_str_is_alpha(char *str)
{
    int i;
    int is_alpha;
    int is_lower_case;
    int is_upper_case;

    i = 0;
    is_alpha = 1;
    while(str[i] != '\0')
    {
        is_lower_case = (str[i] >= 97 && str[i] <= 122);
        is_upper_case = (str[i] >= 65 && str[i] <= 90);
        if(!is_lower_case || !is_upper_case)
            return 0;
        i++;
    }
    return is_alpha;
}