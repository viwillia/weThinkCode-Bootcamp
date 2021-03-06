/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:57:03 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/25 15:57:05 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

void putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
}

int main(int argc, char const *argv[])
{
    int i;

    i = argc - 1;
    while (i > 0)
    {
        putstr((char*) argv[i]);
        putchar('\n');
        i--;
    }
    return 0;
}
