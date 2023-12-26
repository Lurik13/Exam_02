/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:49:26 by lribette          #+#    #+#             */
/*   Updated: 2023/12/26 23:09:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	found;

	i = -1;
	j = -1;
	found = 0;
	if (argc == 3)
	{
		while (argv[1][++i])
		{
			found = 0;
			while (argv[2][++j])
			{
				if (argv[2][j] == argv[1][i])
				{
					found = 1;
					break ;
				}
			}
			if (!found)
				break ;
		}
		if (found)
		{
			i = -1;
			while (argv[1][++i])
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
