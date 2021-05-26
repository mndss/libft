/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:20:27 by eduardo           #+#    #+#             */
/*   Updated: 2021/05/19 14:05:17 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		cc;
	size_t				i;

	str = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		str[i] = cc;
		i++;
	}
	return (s);
}
