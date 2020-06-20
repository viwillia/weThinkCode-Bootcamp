/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 13:09:12 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/20 13:09:14 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int	n;

	n = 2;
	while (nb % n != 0)
	{
		if (n > nb)
			break ;
		n += 1;
	}
	if (nb != n)
		return 0;
	return 1;
}

int ft_find_next_prime(int nb)
{
    while(1)
    {
        if(ft_is_prime(nb))
            return nb;
        nb += 1;
    }
}