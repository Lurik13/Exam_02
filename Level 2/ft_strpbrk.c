/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:14:57 by lribette          #+#    #+#             */
/*   Updated: 2023/12/25 16:38:25 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i++ < ft_strlen(s1))
	{
		j = 0;
		while (j++ < ft_strlen(s2))
		{
			if (s1[i] == s2[j] && s1[i] && s2[j])
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}

int main(void)
{
	printf("   strpbrk : %s\n", strpbrk("over", "salut"));
	printf("ft_strpbrk : %s\n", ft_strpbrk("over", "salut"));
}