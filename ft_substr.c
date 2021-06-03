/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:58:00 by elima-me          #+#    #+#             */
/*   Updated: 2021/06/03 15:04:33 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = (char *)ft_calloc(sizeof(char), len + 1);
	if (!sub)
		return (NULL);
	while ((i < len) && (s[start + i] != '\0') && (i + start) < ft_strlen(s))
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
