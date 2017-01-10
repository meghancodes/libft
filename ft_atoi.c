/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:29:37 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 20:58:41 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Converts str to int representation
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	if (str[i] == '-' && (str[i + 1] - 48) >= 0 && (str[i + 1] - 48) <= 9)
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && (str[i + 1] - 48) >= 0 && (str[i + 1] - 48) <= 9)
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] - 48) >= 0 && (str[i] - 48) <= 9)
			result = result * 10 + (str[i] - 48);
		else
			return (sign * result);
		i++;
	}
	return (sign * result);
}
