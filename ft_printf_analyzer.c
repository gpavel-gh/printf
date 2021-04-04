/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_analyzer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:51:26 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/12 12:50:16 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_analyzer(char *str, va_list ap)
{
	int		cont;

	cont = 0;
	if (*str == '%')
		ft_putchar_fd('%', 0);
	if (*str == 'd' || *str == 'i')
		cont = cont + ft_printf_d(ap);
	if (*str == 's')
		cont = cont + ft_printf_s(ap);
	if (*str == 'c')
		cont = cont + ft_printf_c(ap);
	if (*str == 'x' || *str == 'X')
		cont = cont + ft_printf_xX(ap, str[0]);
	if (*str == 'u')
		cont = cont + ft_printf_u(ap);
	if (*str == 'p')
		cont = cont + ft_printf_p(ap);
	return (cont);
}
