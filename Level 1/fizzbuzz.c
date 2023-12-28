/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:05:17 by lribette          #+#    #+#             */
/*   Updated: 2023/12/28 14:11:47 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putnbr(int number)
{
    if (number > 9)
    {
        putnbr(number / 10);
        putnbr(number % 10);
    }
    else
    {
        number = number + 48;
        write(1, &number, 1);
    }
}

int main(void)
{
    int i;

    i = 0;
    while (++i < 101)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
    }
}