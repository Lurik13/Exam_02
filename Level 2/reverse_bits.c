/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:31:03 by lribette          #+#    #+#             */
/*   Updated: 2024/01/01 13:42:12 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i)
	{
		if (i & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int	new;
	
	i = 8;
	new = 0;
	while (i--)
	{
		new = (new << 1) | (octet & 1);
		octet >>= 1;
	}
	return (new);
}

int	main(void)
{
	print_bits(13);
	write(1, "\n", 1);
	print_bits(reverse_bits(13));
}