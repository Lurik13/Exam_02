/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:53:06 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 16:04:53 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	valeur_absolue(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*list;

	i = 0;
	list = malloc((valeur_absolue(end - start) + 1) * sizeof(int));
	while (start != end)
	{
		list[i] = end;
		if (end > start)
			end--;
		else
			end++;
		i++;
	}
	list[i] = start;
	return (list);
}

int	main(void)
{
	int	*list1;
	int	*list2;
	int	*list3;
	int	*list4;

	list1 = ft_rrange(1, 3);
	printf("List1 : %d, %d, %d\n", list1[0], list1[1], list1[2]);
	list2 = ft_rrange(-1, 2);
	printf("List2 : %d, %d, %d, %d\n", list2[0], list2[1], list2[2], list2[3]);
	list3 = ft_rrange(0, 0);
	printf("List3 : %d\n", list3[0]);
	list4 = ft_rrange(0, -3);
	printf("List4 : %d, %d, %d, %d\n", list4[0], list4[1], list4[2], list4[3]);
}