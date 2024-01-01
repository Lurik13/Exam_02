/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:45:46 by lribette          #+#    #+#             */
/*   Updated: 2024/01/01 14:28:48 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	nega;
	int	number;
	
	i = 0;
	nega = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		nega *= -1;
		i++;
	}
	while (str[i])
	{
		if (value_of(str[i]) == -1)
			break ;
		number = number * str_base + value_of(str[i]);
		i++;
	}
	return (number);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_atoi_base(argv[1], 16));
}