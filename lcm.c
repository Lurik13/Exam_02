/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:45:51 by lribette          #+#    #+#             */
/*   Updated: 2023/12/30 13:09:47 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lowest(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;

	i = lowest(a, b);
	if (a == 0 || b == 0)
		return (0);
	while (i % a != 0 || i % b != 0)
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%u", lcm(16, 3));
}