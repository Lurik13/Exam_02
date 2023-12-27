/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:56:46 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 11:28:41 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	is_last_c(char *str, int i)
{
	while (str[i])
	{
		if (!is_space(str[i]))
			return(0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (!is_space(argv[1][i]))
				write(1, &argv[1][i], 1);
			else
			{
				if (!is_last_c(argv[1], i))
				{
					while (is_space(argv[1][i]))
						i++;
					i--;
					write(1, "   ", 3);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
