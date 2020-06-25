/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:56:30 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/25 15:56:33 by viwillia         ###   ########.fr       */
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
    putstr((char*) argv[0]);
    putchar('\n');
    return 0;
}
