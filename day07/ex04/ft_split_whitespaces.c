/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:55:07 by viwillia          #+#    #+#             */
/*   Updated: 2020/06/26 14:55:08 by viwillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_terminating_character(char c)
{
    return (
        c == '\n' ||
        c == '\t' ||
        c == ' '  ||
        c == '\0'
    );
}

int	ft_word_length(int index, char *string)
{
	int	i;

	i = index;
	while (!is_terminating_character(string[index]))
        index++;
	return index - i;
}

int	ft_word_count(char *string)
{
	int count;
	int index;

	index = 0;
	count = 0;
	while (string[index])
	{
        if (is_terminating_character(string[index]))
            count++;
		index++;
	}
	return ++count;
}

char **ft_split_whitespaces(char *str)
{
    char **table;
	int index;
	int	j;
	int	k;
  	int length;

	index = 0;
	j = 0;
	table = malloc(ft_word_count(str));
	while (str[j])
	{
		k = 1;
		while (is_terminating_character(str[j]))
            j++;

    	length = ft_word_length(j, str);
		table[index] = malloc(++length * sizeof(char*));
		while (!is_terminating_character(str[j]))
		{
			table[index][k - 1] = str[j++];
			k++;
		}

		table[index++][k - 1] = '\0';
	}

	table[index] = 0;
	return table;
}
