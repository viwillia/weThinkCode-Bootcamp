/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:40:21 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/18 15:40:55 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb) {
	
    unsigned int number;

	if (nb < 0) {
		ft_putchar('-');
		number = nb * -1;
	} else {
		number = nb;
    }

	if (number >= 10) {
		ft_putnbr(number / 10);
    }
	ft_putchar((number % 10) + 48);

}
