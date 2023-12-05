/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:00:46 by lribette          #+#    #+#             */
/*   Updated: 2023/12/04 23:17:51 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	which_char(char c)
{
	char	*min;
	char	*maj;
	int	i;

	min = "abcdefghijklmnopqrstuvwxyz";
	maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		while (i < ft_strlen(min))
		{
			if (min[i] == c)
				return (i);
			i++;
		}
	}
	else if (c >= 'A' && c <= 'Z')
	{
		while (i < ft_strlen(maj))
		{
			if (maj[i] == c)
				return (i);
			i++;
		}
	}
	return (i);
}

int	main(int argc, char **argv)
{
	char	*min;
	char	*maj;
	int	i;

	min = "abcdefghijklmnopqrstuvwxyz";
	maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				write(1, &min[25 - which_char(argv[1][i])], 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				write(1, &maj[25 - which_char(argv[1][i])], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}