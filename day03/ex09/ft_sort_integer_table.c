/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:01:16 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/19 13:01:18 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_sort_integer_table(int *tab, int size)
{
	int	count;
	int	i;
	int	tmp;

	count = 0;
	while (count < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		count++;
	}
	return (tab);
}