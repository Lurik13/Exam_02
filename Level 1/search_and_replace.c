/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:26:12 by lribette          #+#    #+#             */
/*   Updated: 2023/12/04 22:37:41 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	sortie(void)
{
	write(1, "\n", 1);
	exit(1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
			sortie();
		while (i < ft_strlen(argv[1]))
		{
			if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}