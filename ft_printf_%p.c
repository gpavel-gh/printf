/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:44:55 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/20 16:40:12 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

char		*ft_printf_p(va_list ap)
{
	unsigned long int		p;
	char	*strp;

	p = (unsigned long int)va_arg(ap, unsigned long int);
	strp = ft_printf_xX(p, 'x');
	return (strp);
}
