char *ft_strstr(char *str, char *to_find)
{
    char *substr;
    int length_substring;
    int n;
    int m;

    length_substring = -1;
    while(to_find[++length_substring] != '\0');

    substr = malloc(length_substring * sizeof(char));
    n = 0;
    m = 0;
    while(str[m++] != '\0')
    {
        if(str[m] == to_find[n])
        {
            substr[n++] = str[m];
        }
    }

    if(to_find[length_substring - 1] != substr[length_substring - 1])
        return NULL;

    return substr;
}
