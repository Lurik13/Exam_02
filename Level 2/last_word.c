/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:16:12 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 18:49:49 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_last_word(char *str, int i)
{
	while (str[i] >= 33 && str[i] <= 126)
		i++;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (!str[i])
		return (-1);
	return (i);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i++;
		while (is_last_word(argv[1], i) != -1)
			i = is_last_word(argv[1], i);
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}