/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 22:54:46 by lribette          #+#    #+#             */
/*   Updated: 2023/12/28 23:19:39 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sorted(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (!is_sorted(tab, size))
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[7] = {1, 4, 3, 8, 10, 2, 3};
	int	i = 0;

	sort_int_tab(tab, 7);
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}