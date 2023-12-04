/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:41:47 by lribette          #+#    #+#             */
/*   Updated: 2023/12/04 20:41:02 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	writee(char c, int moins)
{
	int	i;

	i = c - moins + 1;
	while (i--)
		write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				writee(argv[1][i], 97);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				writee(argv[1][i], 65);
			else
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
