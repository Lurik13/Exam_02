/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:53:48 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 17:00:37 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str);

int ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int	i;
	char	tmp;

	i = 0;
	tmp = 'a';
	while (i < ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[ft_strlen(str) - 1 - i];
		str[ft_strlen(str) - 1 - i] = tmp;
		i++;
	}
	return (str);	
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strrev(argv[1]));
}