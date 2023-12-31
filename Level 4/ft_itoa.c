/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:10:31 by lribette          #+#    #+#             */
/*   Updated: 2023/12/31 11:32:10 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(int nbr)
{
	int	i;
	
	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	int		nega;

	str = malloc(ft_size(nbr) + 1);
	i = ft_size(nbr);
	nega = 1;
	if (nbr == -2147483648)
		str = "-2147483648";
	else
	{
		str[i] = '\0';
		if (nbr < 0)
		{
			str[0] = '-';
			nbr *= -1;
			nega = -1;
		}
		while (--i != -1)
		{
			if (i == 0 && nega == -1)
				break ;
			str[i] = nbr % 10 + 48;
			nbr = nbr / 10;
		}
	}
	return (str);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	int	number = atoi(argv[1]);
	printf("%s", ft_itoa(number));
}