/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:12:08 by lribette          #+#    #+#             */
/*   Updated: 2023/12/30 10:35:38 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_is_prime(int number)
{
	int	i;

	i = 1;
	while(++i < number)
		if (number % i == 0)
			return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;

	i = -1;
	number = 0;
	if (str[0] == '-')
	{
		write(1, "0", 1);
		exit(1);
	}
	while (str[++i])
		number = number * 10 + str[i] - 48;
	if (number == 0 || number == 1)
	{
		write(1, "0", 1);
		exit(1);
	}
	return (number);
}

void	putnbr(int number)
{
	if (number > 9)
	{
		putnbr(number / 10);
		putnbr(number % 10);
	}
	else
	{
		number = number + 48;
		write(1, &number, 1);
	}
}

int	main(int argc, char **argv)
{
	int	number;
	int	sum;
	int	i;

	sum = 0;
	i = 1;
	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		while (++i <= number)
			if (ft_is_prime(i))
				sum += i;
		putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}