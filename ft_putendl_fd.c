/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:11:21 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/14 08:52:12 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Outputs the string s to the file descriptor fd followed by a '\n'
*/

void	ft_putendl_fd(char const *s, int fd)
{
	int	index;

	index = 0;
	if (s)
	{
		while (s[index] != '\0')
		{
			write(fd, &s[index], 1);
			index++;
		}
	}
	write(fd, "\n", 1);
}
