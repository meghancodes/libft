/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:09:46 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/30 14:36:00 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Lexicographically compares s1 and s2
*/

int	ft_strequ(char const *s1, char const *s2)
{
	char const	*str1;
	char const	*str2;

	str1 = s1;
	str2 = s2;
	if (!str1 || !str2)
		return (0);
	while (*str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (1);
	return (0);
}
