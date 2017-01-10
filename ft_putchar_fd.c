/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 09:42:27 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/30 14:29:50 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Outputs the character 'c' to the file descriptor fd
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
