/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:25 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/02 13:39:53 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return (&(((unsigned char *) s)[i]));
		i++;
	}
	return (NULL);
}
