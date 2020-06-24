
char *ft_strncat(char *dest, char *src, int nb)
{
    int dest_length;
    int src_length;
    char* cat_string;

    dest_length = -1;
    src_length = -1;

    while (dest[++dest_length] != '\0');
    while (src[++src_length] != '\0');

    cat_string = malloc((dest_length + src_length) * sizeof(char));

    dest_length = -1;
    src_length = -1;

    while (dest[++dest_length] != '\0')
        cat_string[dest_length] = dest[dest_length];

    while (src[++src_length] != '\0' && src_length < nb)
       cat_string[dest_length + src_length] = src[src_length];
    
    cat_string[dest_length + src_length] = '\0';
    return cat_string;
}