/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:35:39 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 22:49:20 by lribette         ###   ########.fr       */
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

void	print_hex(int number)
{
	char	*conversion;

	conversion = "0123456789abcdef";
	if (number > 15)
		print_hex(number / 16);
	write(1, &conversion[number % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}