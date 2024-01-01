/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:32:25 by lribette          #+#    #+#             */
/*   Updated: 2024/01/01 14:52:15 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int number)
{
	int	first_prime;
	int	i;

	first_prime = 1;
	i = 2;
	if (number == 1)
		printf("1");
	while (number != 1)
	{
		if (number % i == 0)
		{
			if (first_prime)
			{
				printf("%d", i);
				first_prime = 0;
			}
			else
				printf("*%d", i);
			number /= i;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
}