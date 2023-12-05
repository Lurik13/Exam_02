/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:54:20 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 10:47:58 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	number_of_ups(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			j++;
		i++;
	}
	return (j);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*str;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		str = malloc(ft_strlen(argv[1]) + number_of_ups(argv[1]) + 1);
		if (!str)
			return (0);
		while (j < ft_strlen(argv[1]) + number_of_ups(argv[1]))
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				str[j] = '_';
				str[j + 1] = argv[1][i] + 32;
				j += 2;
			}
			else
			{
				str[j] = argv[1][i];
				j++;
			}
			i++;
		}
		str[j] = '\0';

		i = 0;
		while (i < ft_strlen(str))
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

//"hereIsACamelCaseWord"