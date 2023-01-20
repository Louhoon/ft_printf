/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:15:07 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
