/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_xX.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:37:49 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/26 17:47:17 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_str_precision(char *str, char *straux, int neg, int strlen)
{
	struct mystruct var;

	if (neg)
	{
		while (var.p1 - (var.p2 > strlen ? var.p2 : strlen) > 0)
		{
			*straux++ = ' ';
			var.p1--;
		}
	}
	while (var.p2 - strlen > 0)
	{
		*straux++ = '0';
		var.p1--;
	}
	while (str++)
		*straux++ = *str;
	while (str++)
	{
		*straux++ = ' ';
		var.p1--;
	}
}

void	ft_precision_xX(va_list ap, int *cont, struct mystruct var)
{
	int		strlen;
	int		x;
	int		neg;
	char	*str;
	char	*straux;

/*	str = ft_printf_xX(ap, cont)*/
	strlen = ft_strlen(str);
	if (var.p1 < 0)
	{
		neg = var.p2;
		var.p1 = var.p1 * -1;
	}
	x = (var.p1 > var.p2 ? var.p1 : var.p2);
	straux = (char *)malloc((strlen > x ? strlen : x) * sizeof(char));
	straux = ft_str_precision(str, straux, neg, strlen);
}