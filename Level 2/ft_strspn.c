/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:04:53 by lribette          #+#    #+#             */
/*   Updated: 2023/12/05 17:12:58 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;

    i = 0;
    if (s[i] == accept[i])
    {
        while (s[i] == accept[i])
            i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strspn = %ld\n", strspn(argv[1], argv[2]));
	printf("ft_strspn = %ld\n", ft_strspn(argv[1], argv[2]));
}