/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:36:14 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/19 05:06:46 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuint(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_printdecimal(n / 10);
	len += ft_printchar(n % 10 + '0');
	return (len);
}
