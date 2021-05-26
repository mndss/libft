/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:58:15 by elima-me          #+#    #+#             */
/*   Updated: 2021/05/23 19:04:50 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(unsigned char *str1, unsigned char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char *)str1 + i - (unsigned char *)str2 + i);
		i++;
	}
	return (0);
}
