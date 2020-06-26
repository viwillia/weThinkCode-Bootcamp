/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:54:30 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:54:32 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int *ft_range(int min, int max)
{
    int index;
    int length;
    char *table;

    if(min >= max)
    {
        return NULL;
    }
    length = max - min;
    table = malloc(length * sizeof(int));
    
    index = 0;
    while(min < max)
    {
        table[index] = min;
        min++;
        index++;
    }
    return table;
}
