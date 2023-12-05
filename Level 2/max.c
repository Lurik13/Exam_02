/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:53:10 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 19:21:17 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int* tab, unsigned int len);

int max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	max = tab[i];
	if (len == 0)
		return (0);
	while (i++ < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}

int main(void)
{
	int	i;
	int	j;
	int	*tab;
	
	i = 0;
	j = 0;
	tab = malloc(9 * sizeof(int));
	if (!tab)
		return (0);
	while (i++ < 9)
	{
		tab[i] = j;
		j += 11;
	}
	printf("%d, %d", max(tab, 9), tab[9]);
}