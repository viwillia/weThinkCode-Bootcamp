/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:54:41 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:54:43 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_ultimate_range(int **range, int min, int max)
{
    int index;
    int length;
    char *table;

    if(min >= max)
    {
        *range = NULL;
        return 0;
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
    *range = table;
    return index;
}
