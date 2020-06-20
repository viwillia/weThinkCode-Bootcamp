/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:00:57 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/19 13:01:00 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    int length;
    int n;
    char *new_str;

    n = 0;
    while(str[n] != '\0')
    {
        length++;
        n++;
    }

    new_str = malloc(length * sizeof(char));
    n = 0;
    while (n < length)
    {
        new_str[length - n] = str[n];
        n++;
    }

    return new_str;
}
