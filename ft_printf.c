/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:39:27 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/26 16:15:04 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *str, ...)
{
	int			*cont;
	int			x;
	va_list		ap;

	va_start(ap, str);
	x = 0;
	cont = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '%')
		{
			x++;
			cont = cont + ft_printf_analyzer(&str[x], ap, cont);
		}
		else
			ft_putchar_fd(str[x], 0);
			cont++;
		x++;
	}
	va_end(ap);
	return (cont);
}