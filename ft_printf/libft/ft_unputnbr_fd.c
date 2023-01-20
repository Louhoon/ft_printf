/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unputnbr_fd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 14:16:17 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 14:44:07 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_unputnbr_fd(unsigned int n, int fd)
{
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + 48, fd);
	else if (n < 0)
	{
		write(1, &n, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}