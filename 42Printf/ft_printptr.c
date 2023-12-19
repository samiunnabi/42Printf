/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 04:25:55 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/19 05:04:11 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	len;

	len = 0;
	len += ft_printstr("0x");
	if (ptr == NULL)
		len += ft_printchar('0');
	else
		len += ft_printhex((unsigned long long)ptr, 'x');
	return (len);
}
