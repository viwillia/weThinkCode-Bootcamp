/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:40:21 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/18 15:40:55 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void) {

    char hundred;
    char ten;
    char unit;

    hundred = '0' - 1;
    while (++hundred <= '9') {
        ten = hundred;
        while (++ten <= '9') {
            unit = ten + 1;
            while (unit <= '9') {

                ft_putchar(hundred);
                ft_putchar(ten);
                ft_putchar(unit);

                if (hundred != '7' || ten != '8' || unit != '9') {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                unit++;
            }
        }
    }

}
