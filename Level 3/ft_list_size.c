/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 11:38:13 by lribette          #+#    #+#             */
/*   Updated: 2023/12/30 11:43:53 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	compteur;
	
	compteur = 0;
	while (begin_list)
	{
		compteur += 1;
		begin_list = begin_list->next;
	}
	return (compteur);
}