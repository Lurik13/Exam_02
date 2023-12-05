/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:55:12 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 16:13:56 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject);

int ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(reject))
	{
		j = 0;
		while (j < ft_strlen(s))
		{
			if (reject[i] == s[j])
				return (j);
			j++;
		}
		i++;
	}
	return (ft_strlen(s));
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strcspn = %ld\n", strcspn(argv[1], argv[2]));
	printf("ft_strcspn = %ld\n", ft_strcspn(argv[1], argv[2]));
}