/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:18 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:15:18 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_sign(int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (-1);
	}
	return (1);
}

static	int	count_size(int j, int sign)
{
	int	i;

	i = 0;
	while (j)
	{
		j = j / 10;
		i++;
	}
	if (sign == -1)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = check_sign(&n);
	i = count_size(n, sign);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i > 0)
	{
		str[--i] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
