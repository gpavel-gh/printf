/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_analyzer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:51:26 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/09 12:11:30 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_analyzer(char *str, va_list ap)
{
	int		cont;

	cont = 0;
	if (*str == 'd')
		cont = cont + ft_printf_d(ap);
	else if (*str == 's')
		cont = cont + ft_printf_s(ap);
	else if (*str == 'c')
		cont = cont + ft_printf_c(ap);
	else if (*str == '%')
		ft_putchar_fd('%', 0);
	return (cont);
}
