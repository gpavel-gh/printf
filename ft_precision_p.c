/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:55:40 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/26 14:09:44 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_precision_p(va_list ap, int *cont, struct mystruct var)
{
	char	*str;
	int		strlen;

	str = ft_printf_p(ap, cont);
	strlen = ft_strlen(str);
	while (var.p1-- > strlen)
	{
		ft_putchar_fd('c', 0);
		cont++;
	}
	while (str--)
	{
		ft_putchar_fd(*str, 0);
		cont++;
	}

}
