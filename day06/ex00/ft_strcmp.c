/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:55:14 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/25 15:55:16 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strcmp(char* str1, char * str2)
{
    int i;

    i = 0;
    while(str1[i] != '\0')
    {
        if     (str1[i] > str2[i]) return  1;
        else if(str1[i] < str2[i]) return -1;
        i++;
    }
    if     (str1[i] != '\0' && str2[i] == '\0') return  1;
    else if(str1[i] == '\0' && str2[i] != '\0') return -1;
    
    return 0;
}
