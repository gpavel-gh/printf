/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:10:13 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/24 18:09:54 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_precision(va_list ap, char c)
{
	unsigned long int	x;
	char				*str;

	x = (unsigned long int)va_arg(ap, unsigned long int);
	str = ft_printf_xX(x, 16, c);
	if (str)
		printf("\n-%%xX[%s]-\n", str);

	return (1);
} 