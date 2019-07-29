/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:38:01 by jolam             #+#    #+#             */
/*   Updated: 2018/08/03 16:22:09 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	num;

	str_len = get_str_len(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = num % 10 + '0';
	while (num /= 10)
		str[--str_len] = num % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
