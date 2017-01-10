/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 17:09:09 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 17:09:10 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Returns an array of "fresh" strings by splitting s using c as a delimiter
*/

static int		ft_countwords(char const *s, char c)
{
	int		index;
	int		count;

	index = 0;
	count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] != c && s[index] != '\0')
			count++;
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	return (count);
}

static int		ft_wordlength(char const *s, char c)
{
	int		index;
	int		count;

	index = 0;
	count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		while (s[index] != c && s[index] != '\0')
		{
			index++;
			count++;
		}
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		index;
	int		m;
	int		n;
	char	**str;

	index = 0;
	m = 0;
	if (!s || !(str = (char **)malloc(sizeof(char *) *
		(ft_countwords(s, c) + 1))))
		return (NULL);
	while (index < ft_countwords(s, c))
	{
		n = 0;
		if (!(str[index] = (char *)malloc(sizeof(char) * ft_wordlength(s, c)
			+ 1)))
			str[index] = NULL;
		while (s[m] == c && s[m])
			m++;
		while (s[m] != c && s[m])
			str[index][n++] = s[m++];
		str[index][n] = '\0';
		index++;
	}
	str[index] = NULL;
	return (str);
}
