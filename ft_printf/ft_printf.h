/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 17:32:42 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 16:19:11 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);

int	ft_printstr(const char *s);

int	ft_putnumber(int n);

int	ft_unsignedint(unsigned int);

int	ft_print_percent(char c);

#endif