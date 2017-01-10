/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:54 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/10 12:38:01 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Returns a copy of the string without whitespaces at the beginning or end
*/

static int			ft_isspacestrtrim(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static unsigned int	ft_trimlength(char const *s)
{
	size_t	index;
	size_t	new_count;
	size_t	final_count;

	index = 0;
	new_count = 0;
	final_count = 0;
	while (ft_isspacestrtrim(s[index]))
		index++;
	while (s[index] != '\0')
	{
		index++;
		new_count++;
	}
	while (ft_isspacestrtrim(s[--index]))
		final_count++;
	return (new_count - final_count);
}

char				*ft_strtrim(char const *s)
{
	char	*copy;
	size_t	index;
	size_t	i;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(copy = (char *)malloc(sizeof(char) * ft_trimlength(s) + 1)))
		return (NULL);
	while (index < ft_strlen(s))
	{
		if (!i && ft_isspacestrtrim(s[index]))
			index++;
		else
		{
			copy[i++] = s[index++];
			copy[i] = '\0';
		}
	}
	while (ft_isspacestrtrim(copy[--i]))
		copy[i] = '\0';
	return (copy);
}
