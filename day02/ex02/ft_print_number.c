/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:40:21 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/18 15:40:55 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return 0;
}

void ft_print_reverse_alphabet(void) {
    char number;

    number = '0';
    while(number <= '9') {
        ft_putchar(number);
        number++;
    }
    
}
