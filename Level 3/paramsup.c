/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:35:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/27 20:40:31 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putnbr(int argc)
{
	if (argc > 9)
	{
		putnbr(argc / 10);
		putnbr(argc % 10);
	}
	argc = argc + 48;
	write(1, &argc, 1);
}

int main(int argc, char **argv)
{
	(void)argv;
	putnbr(argc - 1);
}