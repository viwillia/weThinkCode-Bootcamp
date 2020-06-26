/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:55:18 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:55:19 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

void ft_print_words_table(char **tab)
{
    int index;

    index = 0;
    while (tab[index][0] != 0)
    {
        ft_putstr(tab[index]);
        ft_putchar('\n');
        index++;
    }
}
