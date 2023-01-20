/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 17:56:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 18:13:37 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_format(va_list args, const char str, int len)
{
	
	len = 0;
	if (str == 's')
		len = len + ft_printstr(va_arg(args, char *));
	// else if (str == 'c')
	// 	return(0);
	else if (str == 'd')
		len = len + ft_putnumber(va_arg(args, int));
	else if (str == 'i')
		len = len + ft_putnumber(va_arg(args, int));
	else if (str == 'u')
		len = len + ft_unsignedint(va_arg(args, unsigned int));
	// else if (str == 'x')
	// 	return(0);
	// else if (str == 'X')
	// 	return (0);
	else if (str == '%')
		len = len + ft_print_percent(va_arg(args, int));
	len++;
	return (len);
}


int	ft_printf(const char *s, ...)
{
	int j;
	int len;
	va_list args;
	va_start(args, s);

	j = 0;
	len = ft_strlen(s);
	while (s[j])
	{
		if (s[j] == '%')
		{
			ft_format(args, s[j + 1], len);
			j++;
		}
		else
			ft_putchar_fd(s[j], 1);
		j++;
	}
	va_end(args);
	return (len);
}

int main(void)
{	
	ft_printf("%d\n", 12);
	printf("%d\n", 12);
	return (0);
}