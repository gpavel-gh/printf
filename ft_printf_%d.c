/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:16:47 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/11 11:10:52 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_d(va_list ap)
{
	int		d;
	int		cont;

	d = 0;
	d = (int)va_arg(ap, int);
	cont = ft_putnbr_fd(d, 0);
	return (cont);
}