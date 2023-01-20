/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:20:05 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/02 13:43:32 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;

	allocated_memory = malloc(count * size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, (count * size));
	return (allocated_memory);
}
