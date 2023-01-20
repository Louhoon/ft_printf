/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:19:09 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/02 13:42:43 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substr_len;
	char	*substr;

	i = 0;
	substr_len = ft_strlen(s);
	if (start >= substr_len)
		return (ft_strdup(""));
	if (substr_len < len)
		len = substr_len - start;
	substr = malloc((sizeof(char) * (len + 1)));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
