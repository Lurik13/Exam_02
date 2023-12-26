/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:30:48 by lribette          #+#    #+#             */
/*   Updated: 2023/12/26 22:46:59 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *str1, char *str2)
{
	int	i;
	int	j;
	
	i = 0;
	j = -1;
	while (str1[i])
		i++;
	while (str2[++j])
		str1[i + j] = str2[j];
	str1[i + j] = '\0';
	return (str1);
}

void	print_uniques(char *str)
{
	int	i;
	int	j;
	int	same;

	i = -1;
	j = -1;
	same = 0;
	while (str[++i])
	{
		j = -1;
		same = 0;
		while (str[++j] && j < i)
		{
			if (str[j] == str[i])
				same = 1;
		}
		if (!same)
			write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		print_uniques(ft_strcat(argv[1], argv[2]));
	write(1, "\n", 1);
}