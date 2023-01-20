/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:17:11 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/02 13:40:46 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		s1_size;
	char	*dupstring;

	i = 0;
	s1_size = ft_strlen(s1);
	dupstring = malloc(sizeof(s1[i]) * (s1_size + 1));
	if (dupstring == NULL)
		return (NULL);
	while (s1[i])
	{
		dupstring[i] = s1[i];
		i++;
	}
	dupstring[i] = '\0';
	return (dupstring);
}
