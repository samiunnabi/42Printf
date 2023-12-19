/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:04:33 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/19 04:14:59 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long n, char format)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_printhex((n / 16), format);
		len += ft_printhex((n % 16), format);
	}
	if (n >= 0 && n <= 9)
		len += ft_printchar(n + '0');
	else if (n > 9 && n < 16)
	{
		if (format == 'x')
			len += ft_printchar(n - 10 + 'a');
		else if (format == 'X')
			len += ft_printchar(n - 10 + 'A');
	}
	return (len);
}
