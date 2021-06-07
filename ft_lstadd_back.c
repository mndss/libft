/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:56:41 by elima-me          #+#    #+#             */
/*   Updated: 2021/06/07 13:21:50 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	last_element = *lst;
	if (lst == NULL || new == NULL)
		return ;
	while (last_element->next != NULL)
		last_element = last_element->next;
	last_element = new;
	new-> next = NULL;
	return ;
}
