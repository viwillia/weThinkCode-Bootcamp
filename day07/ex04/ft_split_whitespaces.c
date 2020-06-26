/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:55:07 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:55:08 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char **ft_split_whitespaces(char *str)
{
    int i;
    int j;
    int n;
    int length;
    char ** split;

    i = 0;
    length = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] != '\t' || str[i] != '\n')
            i++;
            continue;
        i++;
        length++;
    }

    split = malloc(length * sizeof(char));
    i = 0;
    j = -1;
    n = 0;

    while(i < length)
    {
        if(str[i] == ' ' || str[i] != '\t' || str[i] != '\n')
        {
            n = 0;
            j++;
        }
        split[j][n] = str[i];
        n++;
        i++;
    }

    return split;
}

int main()
{
    char **nice = ft_split_whitespaces("My\tname is\tvicario williams");
    printf("%s\n", nice[3]);
    return 0;
}
