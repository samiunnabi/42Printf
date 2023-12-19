/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 06:17:40 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/19 05:07:00 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printdecimal(int n);
int	ft_printhex(unsigned long long n, char format);
int	ft_printuint(unsigned int n);
int	ft_printptr(void *ptr);

#endif
