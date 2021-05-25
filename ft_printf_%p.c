/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:44:55 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/25 17:55:37 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int		ft_printf_p(va_list ap)
{
	unsigned long int	p;
	int					i;
	char				*strp;

	p = (unsigned long int)va_arg(ap, unsigned long int);
	ft_putstr_fd("0x", 0);
	if (p == 0)
	{
		ft_putchar_fd(48, 0);
		return(3);
	}
	strp = ft_printf_xX(p, 16, 'x');
	i = 0;
	while (strp[i] != '\0')
		ft_putchar_fd(strp[i++], 0);
	i += 1;
	return (i);
}
