/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 09:12:36 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 16:22:16 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(const char *s)
{
	int len;

	len = ft_strlen(s);
	if (s != NULL)
		ft_putstr(s);
	else
		write(1, "(null)", 1);

	return (len);
}

int	ft_putnumber(int n)
{
	ft_putnbr_fd(n, 1);
	return(n);
}

int	ft_unsignedint(unsigned int n)
{
	ft_unputnbr_fd(n, 1);
	return(n);
}

int	ft_print_percent(char c)
{
	c = '%';
	return(c);
}