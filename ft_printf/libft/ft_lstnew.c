/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 17:56:38 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/01 13:13:51 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elements;

	elements = malloc(sizeof(*elements));
	if (!elements)
		return (NULL);
	elements->content = content;
	elements->next = NULL;
	return (elements);
}
