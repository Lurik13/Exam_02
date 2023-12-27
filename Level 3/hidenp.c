/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:10:24 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 17:32:16 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	program(char *gauche, char *droite)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (gauche[++i])
	{
		while (gauche[i] != droite[j] && droite[j])
			j++;
		if (!droite[j])
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		i = program(argv[1], argv[2]) + 48;
		write(1, &i, 1);
	}
	write(1, "\n", 1);
}