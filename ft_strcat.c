/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:11:29 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/14 08:53:24 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Appends a copy of the NULL-terminated string s2 to s1
**  and adds a terminating '\0'
*/

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;

	str = s1;
	while (*str != '\0')
		str++;
	while (*s2 != '\0')
	{
		*str = *s2;
		s2++;
		str++;
	}
	*str = '\0';
	return (s1);
}
