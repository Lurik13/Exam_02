/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:44:42 by lribette          #+#    #+#             */
/*   Updated: 2023/12/26 15:36:24 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *word, char *str, char letter, int i)
{
	int	j;
	
	j = -1;
	while (++j < i)
	{
		if (word[j] == word[i])
			return (1);
	}
	j = -1;
	while (str[++j])
	{
		if (str[j] == letter)
			return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!check_doubles(argv[1], argv[2], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
