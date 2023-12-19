/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:30:29 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/19 04:11:05 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdecimal(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_printchar('-');
		len += ft_printchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		len += ft_printchar('-');
		n = n * -1;
	}
	if (n > 9)
		len += ft_printdecimal(n / 10);
	len += ft_printchar(n % 10 + '0');
	return (len);
}
