/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:36:49 by lribette          #+#    #+#             */
/*   Updated: 2023/12/26 21:56:48 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	number_of_letters(char *str)
{
	int	i;
	int	compteur;

	i = -1;
	compteur = 0;
	while (str[++i])
	{
		if (str[i] != '_')
			compteur++;
	}
	return (compteur);
}

void	write_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		str = malloc(number_of_letters(argv[1]) * sizeof(char *));
		if (!str)
			return (0);
		i = -1;
		j = 0;
		while (argv[1][++i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				str[j] = argv[1][i] - 32;
			}
			else
				str[j] = argv[1][i];
			j++;
		}
		str[j] = '\0';
		write_str(str);
	}
}
