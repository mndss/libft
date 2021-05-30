/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 18:00:15 by elima-me          #+#    #+#             */
/*   Updated: 2021/05/26 21:02:40 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_len(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		num = n;
		i++;
	}
	else
		num = n;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				len;
	char			*str;
	int				neg;

	len = ft_check_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	neg = 0;
	if (n < 0)
	{
		neg = -1;
		n *= -1;
		num = n;
	}
	num = n;
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	if (neg < 0)
		str[0] = '-';
	return (str);
}
