/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:38:03 by lribette          #+#    #+#             */
/*   Updated: 2023/12/04 22:07:49 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	char	*maj;
	char	*min;
	int	i;

	min = "abcdefghijklmnopqrstuvwxyz";
	maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	if (argc == 2)
	{
		while (i < ft_strlen(argv[1]))
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				write(1, &min[(argv[1][i] - 97 + 13) % 26], 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				write(1, &maj[(argv[1][i] - 65 + 13) % 26], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}