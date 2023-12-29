/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:00:44 by lribette          #+#    #+#             */
/*   Updated: 2023/12/29 16:02:58 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

int	main(void)
{
	int	i = 65;
	print_bits(i);
	write(1, "\n", 1);
	print_bits(swap_bits(i));
}