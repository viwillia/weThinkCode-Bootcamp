/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 15:40:21 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/18 15:40:55 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet(void) {
    char letter;
    
    letter = 'z';
    while(letter >= 'a') {
        ft_putchar(letter);
        letter--;
    }
    
}
