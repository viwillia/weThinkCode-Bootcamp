/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 13:04:26 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/20 13:04:28 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int value;

    value = 1;
    while(power > 0)
    {
        value *= nb;
        power--;
    }
    return value;
}