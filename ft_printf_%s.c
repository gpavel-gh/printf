/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:32:48 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/11 11:11:07 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_s(va_list ap)
{
	int			cont;
	char		*str;

	cont = 0;
	str = (char *)va_arg(ap, char *);
	while (str[cont] != '\0')
	{
		ft_putchar_fd(str[cont], 0);
		cont++;
	}
	cont--;
	return (cont);
}
