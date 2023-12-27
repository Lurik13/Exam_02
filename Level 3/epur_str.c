/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:37:55 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 10:49:55 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (!is_space(argv[1][i]))
				write(1, &argv[1][i], 1);
			else
			{
				while (is_space(argv[1][i]))
					i++;
				i--;
				if (argv[1][i + 1])
					write(1, " ", 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
