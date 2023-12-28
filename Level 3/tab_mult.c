/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:05:59 by lribette          #+#    #+#             */
/*   Updated: 2023/12/28 09:33:07 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;

	i = -1;
	number = 0;
	while (str[++i])
		number = number * 10 + str[i] - 48;
	return (number);
}

void	putnbr(int number)
{
	int	i;

	if (number > 9)
	{
		putnbr(number / 10);
		putnbr(number % 10);
	}
	else
	{
		i = number + 48;
		write(1, &i, 1);
	}
}

void	tab_mult(int number)
{
	int	i;

	i = 0;
	while (++i < 10)
	{
		putnbr(i);
		write(1, " x ", 3);
		putnbr(number);
		write(1, " = ", 3);
		putnbr(i * number);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		tab_mult(ft_atoi(argv[1]));
}