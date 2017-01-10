/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:27:41 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 21:10:58 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Outputs the string s to the standard output followed by '\n'
*/

void	ft_putendl(char const *s)
{
	int index;

	index = 0;
	if (s)
	{
		while (s[index])
		{
			ft_putchar(s[index]);
			index++;
		}
	}
	ft_putchar('\n');
}
