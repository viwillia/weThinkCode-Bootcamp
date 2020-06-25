/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:57:23 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/25 15:57:25 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] > s2[i]) return 1;
        else if (s1[i] < s2[i]) return -1;
        i++;
    }
    if (s1[i] == '\0' && s2[i] != '\0') return -1;
    else if (s1[i] != '\0' && s2[i] == '\0') return 1;
    else return 0;
}

int main(int argc, char *argv[])
{
    int i;
    char* temp;

    i = 1;
    while (i < argc - 1)
    {
        if(ft_strcmp(argv[i], argv[i + 1]) > 0)
        {
            temp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = temp;
            i = 1;
        } else 
            i++;
    }

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return 0;
}
