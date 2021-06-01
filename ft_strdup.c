/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:28:03 by elima-me          #+#    #+#             */
/*   Updated: 2021/06/01 14:20:12 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;
	size_t	count;

	i = (ft_strlen(s));
	new = (char *)malloc(sizeof(char) * (i + 1));
	count = 0;
	if (!new)
		return (NULL);
	while (s[count] != '\0')
	{
		new[count] = s[count];
		count++;
	}
	new[count] = '\0';
	return (new);
}
