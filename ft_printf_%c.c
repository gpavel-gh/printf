/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:09:12 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/09 12:11:41 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_c(va_list ap)
{
	char		c;
	int			cont;

	c = (char)va_arg(ap, char *);
	ft_putchar_fd(c, 0);
	return (cont = 1);
}
