/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:40:21 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/18 15:40:55 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return 0;
}

void show(int number) {
	
	if (number > 9) {
		
        int	first = number / 10;
		int	second = number % 10;
		
        ft_putchar(first + 48);
		ft_putchar(second + 48);

        return;

	}

	ft_putchar('0');
	ft_putchar(number + 48);

}

void ft_print_comb2(void) {

	int n;
	int m;

	n = 0;
    while (n <= 99) {
		m = n + 1;
		while (m <= 99) {
    
            show(n);
			ft_putchar(' ');
			show(m);
			
            if (n < 98 || m < 99) {
				ft_putchar(',');
				ft_putchar(' ');
			}
			m++;
        } 
		n++;
	}

    

}
