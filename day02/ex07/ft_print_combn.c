/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:40:21 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/18 15:40:55 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void show(int *range, int n) {

	int	m;
	int	must_show;

	must_show = 1;
	m = 0;
	while (++m < n)
		if (range[m - 1] >= range[m])
			must_show = 0;
	if (!must_show)
		return ;
	m = -1;
	while (++m < n)
		ft_putchar(range[m] + 48);
	if (range[0] < (10 - n)) {
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_combn(int n) {
	
	int	m;
	int	range[10];

	if (n > 10 || n < 0)
		return ;
	m = -1;
	while (++m < n)
		range[m] = m;
	while (range[0] <= (10 - n) && n >= 1) {
		show(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		m = n;
		while (m && n > 1) {
			m--;
			if (range[m] > 9) {
				range[m - 1]++;
				range[m] = 0;
			}
		}
	}
}
