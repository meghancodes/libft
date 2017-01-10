/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:04:46 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/20 11:54:43 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies s1 and returns a pointer to it
*/

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*tmp;

	if (!(s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	tmp = s2;
	while (*s1 != '\0')
	{
		*tmp = *s1;
		s1++;
		tmp++;
	}
	*tmp = '\0';
	return (s2);
}
