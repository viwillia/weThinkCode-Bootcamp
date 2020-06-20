/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c										:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 13:06:25 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/20 13:06:27 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
		return -1;
	else  if (index == 0 || index == 1)
		return index;
	else
		return ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
}