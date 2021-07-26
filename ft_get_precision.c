/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:32:26 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/26 16:26:08 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_get_precision_val(char *str, va_list ap)
{
	int				i;
	long int		x;
	struct mystruct var;

	i = 1;
	if (*str == '.')
		return (0);
	if (*str == '*')
	{
		return ((long int)va_arg(ap, int));
	}
	if (*str == '-')
		i = -1;
	while (*str == '0' && *str <= '9')
	{
		x = *str + 48;
		str++;
		var.n += 1;
	}
	var.n += 1;
	return (x * i);
}

static int			ft_analyze_str_pre(va_list ap, char *str)
{
	struct mystruct var;
	int				x;
	int				n;

	x = 0;
	var.p1 = ft_get_precision_val(str, ap);
	n = var.n;
	x = n + 1;
	var.p2 = ft_get_precision_val(&str[x], ap);

	printf("\n-%li-\n-%li-\n", var.p1, var.p2);

	return (var.n);
}

int			ft_get_precision(va_list ap, char *str)
{

	ft_analyze_str_pre(ap, str);
	return (0);
}