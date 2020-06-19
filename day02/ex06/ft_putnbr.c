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

#include <unistd.h>
#include <string.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return 0;
}

void ft_putnbr(int number) {
	
    unsigned int _number;

	if (number < 0) {
		ft_putchar('-');
		_number = number * -1;
	} else {
		_number = number;
    }

	if (_number >= 10) {
		ft_putnbr(_number / 10);
    }
	ft_putchar((_number % 10) + 48);

}
