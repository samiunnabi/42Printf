/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 05:52:51 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/19 05:31:19 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checkformat(va_list val, char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_printchar(va_arg(val, int));
	else if (type == 's')
		len += ft_printstr(va_arg(val, char *));
	else if (type == 'p')
		len += ft_printptr(va_arg(val, void *));
	else if (type == 'd' || type == 'i')
		len += ft_printdecimal(va_arg(val, int));
	else if (type == 'u')
		len += ft_printuint(va_arg(val, unsigned int));
	else if (type == 'x' || type == 'X')
		len += ft_printhex(va_arg(val, unsigned int), type);
	else if (type == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	val;
	int		i;
	int		char_print;

	va_start(val, format);
	i = 0;
	char_print = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			char_print += checkformat(val, format[i]);
		}
		else
			char_print += ft_printchar(format[i]);
		i++;
	}
	va_end(val);
	return (char_print);
}
