/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:41:57 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 20:53:37 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	lowest(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int main(int argc, char **argv)
{
	int	pgcd;
	int	i;
	int	a;
	int	b;

	pgcd = 1;
	i = 1;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		while (++i <= lowest(a, b))
		{
			if (a % i == 0 && b % i == 0)
				pgcd = i;
		}
		printf("%d", pgcd);
	}
	printf("\n");
}