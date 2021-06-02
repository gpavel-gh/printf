/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_analyzer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:51:26 by gpavel            #+#    #+#             */
/*   Updated: 2021/06/02 18:54:33 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			ft_analyze_str_pre(va_list ap, char *str)
{
	int				i;
	int				x;
	struct mystruct var;

	i = 0;
	x = 0;
	if (*str == '.' && !(var.p1))
		
	if (*str == '*')
	{
		var.p1 = (long int)va_arg(ap, long int);
		x = 1;
	}
	if (*str == '-' || (*str == '0' && *str <= '9'))
	{
		var.p1 = ft_atoi(str);
		x *= ft_count_();
	}


	return (i);
}

static int			ft_analyzer_precision(va_list ap, char *str)
{
	char			conversion;
	struct mystruct var;

	conversion = ft_analyze_str_pre(ap, str);



	if (*str)
	return (0);
}

int				ft_printf_analyzer(char *str, va_list ap)
{
	int		cont;

	cont = 0;
	if (*str == '%')
		ft_putchar_fd('%', 0);
		cont++;
	if (*str == 'd' || *str == 'i')
		cont = cont + ft_printf_d(ap);
	if (*str == 's')
		cont = cont + ft_printf_s(ap);
	if (*str == 'c')
		cont = cont + ft_printf_c(ap);
	if (*str == 'x' || *str == 'X')
		cont = cont + ft_precision(ap, str[0]);
	if (*str == 'u')
		cont = cont + ft_printf_u(ap);
	if (*str == 'p')
		cont = cont + ft_printf_p(ap);
	if (*str == '-' || *str == '.' || *str == '*' || (*str >= '0' && *str <= '9'))
		cont = cont + ft_analyzer_precision(ap, str);
	return (cont);
}
