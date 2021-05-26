/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:44:38 by elima-me          #+#    #+#             */
/*   Updated: 2021/05/26 14:31:12 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len)
	{
		count = 0;
		while ((i + count) < len && big[i + count] == little[count])
		{
			if (little[count + 1] == '\0')
				return ((char *)big + i);
			count++;
		}
		i++;
	}
	return (NULL);
}
