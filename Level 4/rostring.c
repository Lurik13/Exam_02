/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:52:14 by lribette          #+#    #+#             */
/*   Updated: 2024/01/01 17:08:46 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

void	rostring(char *str)
{
	int	i;
	int	first_word_length;
	int	several_words;

	i = 0;
	first_word_length = 0;
	several_words = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (!first_word_length)
		{
			while (str[i] && !is_space(str[i]))
			{
				first_word_length++;
				i++;
			}
		}
		else
		{
			while (str[i] && !is_space(str[i]))
			{
				write(1, &str[i], 1);
				several_words = 1;
				i++;
			}
			if (str[i])
				write(1, " ", 1);
		}
	}
	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	if (several_words)
		write(1, " ", 1);
	while (first_word_length--)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
}