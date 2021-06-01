/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:58:00 by elima-me          #+#    #+#             */
/*   Updated: 2021/06/01 15:05:48 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size_s;
	size_t	max_len;

	if (s == NULL)
		return (NULL);
	sub = (char *)ft_calloc(sizeof(char), len + 1);
	size_s = ft_strlen(s);
	max_len = size_s - start;
	if (!sub)
		return (NULL);
	if (len > max_len)
		len = max_len;
	if (size_s < start)
	{
		*sub = '\0';
		return (sub);
	}
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
