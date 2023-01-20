/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:17:44 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/02 13:41:01 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dest_len;
	i = 0;
	if (dest_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i])
		{
			dst[j] = src[i];
			j++;
			i++;
			if (j == dstsize - 1)
				break ;
		}
		dst[j] = '\0';
	}
	if (dest_len >= dstsize)
		dest_len = dstsize;
	return (dest_len + src_len);
}
