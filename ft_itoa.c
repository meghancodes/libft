/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:16:27 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/04 16:45:17 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Allocates with malloc and returns a "fresh" string ending with '\0'
**  which represents the integer n given as argument
*/

static int	ft_intcount(int n)
{
	long	ln;
	int		count;

	ln = n;
	count = 0;
	if (ln == 0)
		count++;
	while (ln < 0)
	{
		ln = -n;
		count++;
	}
	while (ln > 0)
	{
		count++;
		ln /= 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intcount(n) + 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len - 1] = '\0';
	while (n != 0)
	{
		len--;
		str[len - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
