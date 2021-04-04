/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:15:55 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/10 10:37:10 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_u(va_list ap)
{
	char 	c;
	int		cont;

	c = (char)va_arg(ap, char *);
	if (c >= ' ' && c <= '~')
		cont = ft_putnbr_fd(c, 0);
	else 
		cont = 0;
	return (cont); 
}