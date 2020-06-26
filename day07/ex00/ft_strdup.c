/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:54:09 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:54:17 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strdup(char *src)
{
    int length;
    int index;
    char* duplicate;

    length = 0;
    while(src[length] != '\0')
        length++;

    duplicate = malloc(++length * sizeof(char));

    index = 0;
    while(index < length)
    {
        duplicate[index] = src[index];
        index++;
    }
    duplicate[index] = '\0';

    return duplicate;
}
