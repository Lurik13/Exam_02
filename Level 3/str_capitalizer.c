/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:42:52 by lribette          #+#    #+#             */
/*   Updated: 2023/12/28 08:57:15 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*up_to_low(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (is_uppercase(str[i]))
			str[i] += 32;
	return (str);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((is_lowercase(str[i]) && str[i - 1] == ' ')
			|| (is_lowercase(str[i]) && i == 0))
			str[i] -= 32;
	}
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
		while (++i < argc)
			str_capitalizer(up_to_low(argv[i]));
}