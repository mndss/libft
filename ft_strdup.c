/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:28:03 by elima-me          #+#    #+#             */
/*   Updated: 2021/05/22 23:50:13 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;
	int		count;

	i = (ft_strlen(s));
	new = malloc(sizeof(char) * i);
	count = 0;
	while (s[count] != '\0')
	{
		new[count] = s[count];
		count++;
	}
	new[count] = '\0';
	return (new);
}
