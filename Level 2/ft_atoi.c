/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:03:48 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 11:14:08 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	nega;

	i = 0;
	number = 0;
	nega = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nega *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (number * nega);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("   atoi = %d\n", atoi(argv[1]));
	printf("ft_atoi = %d\n", ft_atoi(argv[1]));
}