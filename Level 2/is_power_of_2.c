/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:46:22 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 18:06:55 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n);

int	is_pair(unsigned int n)
{
	if (n % 2 == 0)
		return (1);
	return (0);
}

int	    is_power_of_2(unsigned int n)
{
	if (n < 2)
		return (n);
	while (n != 2)
	{
		if (!is_pair(n))
			return (0);
		n /= 2;
	}
	return (1);
}

int main(void)
{
	int	i;
	
	i = 0;
	while (i++ < 2048)
	{
		if (is_power_of_2(i))
			printf("i = %d\n", i);
		/*else
			printf("i = %d   |   Nope\n", i);*/
	}
}