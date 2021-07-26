/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_analyzer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:51:26 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/26 13:16:49 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_printf_analyzer(char *str, va_list ap, int *cont)
{
	if (*str == '%')
	{
		ft_putchar_fd('%', 0);
		*cont += 1;
	}
	if (*str == 'd' || *str == 'i')
		*cont = *cont + ft_printf_d(ap);
	if (*str == 's')
		*cont = *cont + ft_printf_s(ap);
	if (*str == 'c')
		*cont = *cont + ft_printf_c(ap);
	if (*str == 'x' || *str == 'X')
		*cont = *cont + ft_precision(ap, str[0]);
	if (*str == 'u')
		*cont = *cont + ft_printf_u(ap);
	if (*str == 'p')
		*cont = *cont + ft_printf_p(ap);
	if (*str == '-' || *str == '.' || *str == '*' || (*str >= '0' && *str <= '9'))
		*cont = *cont + ft_get_precision(ap, str);
	return (*cont);
}
