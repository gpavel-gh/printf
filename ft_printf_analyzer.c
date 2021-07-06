/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_analyzer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:51:26 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/06 15:28:28 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void 			ft_get_precision_val(va_list ap, char *str)
{
	int				i;
	struct mystruct var;

	i = 0;
	var.p1 = ft_get_pre1_val(var.p1, str, ap);

}
static int		ft_get_pre1_val(int	x, char *str, va_list ap)
{
	int 	i;
	int		x;

	if (*str == '.')
		return (0);
	i = 1;
	if (*str == '*')
	{
		x = (long int)va_arg(ap, int);
	}
	if (*str == '-')
		i *= -1; 
	while (*str == '0' && *str <= '9')
	{
		x = *str + 48;
		str++;
	}
	return (x);
}


static int			ft_analyzer_precision(va_list ap, char *str)
{
	char			conversion;
	struct mystruct var;

	ft_analyze_str_pre(ap, str);






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
