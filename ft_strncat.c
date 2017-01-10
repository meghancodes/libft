/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:45:10 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 10:52:37 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Appends n characters from the NULL-terminated string s2 to s1
**  and adds a terminating '\0'
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;

	str = s1;
	while (*str != '\0')
		str++;
	while (*s2 && (n > 0))
	{
		*str = *s2;
		s2++;
		str++;
		n--;
	}
	*str = '\0';
	return (s1);
}
