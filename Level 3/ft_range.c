/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:03:29 by lribette          #+#    #+#             */
/*   Updated: 2023/12/30 12:36:14 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	valeur_absolue(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	tab = malloc(valeur_absolue(start - end + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (start != end)
	{
		tab[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}

int	main(void)
{
	int	*tab1 = ft_range(1, 3);
	int	*tab2 = ft_range(-1, 2);
	int	*tab3 = ft_range(0, 0);
	int	*tab4 = ft_range(0, -3);
	
	printf("Tab1 : %d, %d, %d\nTab2 : %d, %d, %d, %d\nTab3 : %d\nTab4 : %d, %d, %d, %d\n", tab1[0], tab1[1], tab1[2], tab2[0], tab2[1], tab2[2], tab2[3], tab3[0], tab4[0], tab4[1], tab4[2], tab4[3]);
}