/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:55:23 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/25 15:55:25 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
