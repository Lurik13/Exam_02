/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:26:47 by lribette          #+#    #+#             */
/*   Updated: 2023/12/28 14:34:22 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	(void)argc;
	//printf("   strcpy : %s", strcpy(argv[1], argv[2]));
	printf("ft_strcpy : %s", ft_strcpy(argv[1], argv[2]));
}