/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 13:02:27 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/20 13:02:29 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int factorial;

    factorial = 1;
    while(nb > 0)
    {
        factorial *= nb;
        nb--;
    }
    return factorial;
}