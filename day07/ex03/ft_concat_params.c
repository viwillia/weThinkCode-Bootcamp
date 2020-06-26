/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:54:54 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:54:56 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_concat_params(int argc, char **argv)
{
    int n;
    int m;
    int length;
    char* concat;

    n = 0;
    length = 0;

    while(++n < argc)
    {
        m = 0;
        while(argv[n][m++] != '\0')
            length++;
        length++;
    }

    concat = malloc(length * sizeof(char));

    n = 0;
    length = 0;
    while(++n < argc)
    {
        m = 0;
        while(argv[n][m] != '\0')
            concat[length++] = argv[n][m++];
        concat[length++] = '\n';
    }
    concat[length - 1] = '\0';
    return concat;
}