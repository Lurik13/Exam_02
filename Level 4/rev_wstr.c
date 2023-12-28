/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:36:16 by lribette          #+#    #+#             */
/*   Updated: 2023/12/28 21:49:55 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	putstr(char *str)
{
	int	i;
	int	debut;
	int	fin;

	i = ft_strlen(str);
	fin = i - 1;
	while (--i >= 0)
	{
		if (str[i] == 32)
		{
			debut = i;
			while (++debut <= fin)
				write(1, &str[debut], 1);
			write(1, " ", 1);
			fin = i - 1;
		}
	}
	debut = -1;
	while (++debut <= fin)
		write(1, &str[debut], 1);
}

int	main(int argc, char **argv)
{
	
	if (argc == 2)
		putstr(argv[1]);
	write(1, "\n", 1);
}