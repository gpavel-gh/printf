/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:49:39 by gpavel            #+#    #+#             */
/*   Updated: 2021/04/02 11:06:28 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_xX(va_list ap, char c)
{
	unsigned int		x;
	int		r;
	int		cont;

	x = (unsigned int)va_arg(ap, unsigned int);
	cont = ft_putnbr_fd(x / 16, 0);
	r = x % 16;
	if (r <= 9)
		cont = ft_putnbr_fd(r, 0);
	else 
	{
		r = r - 10;
		if (c == 'x')
			ft_putchar_fd(97 + r, 0);
		if (c == 'X')
			ft_putchar_fd(65 + r, 0);
	}
	return (cont++);
}