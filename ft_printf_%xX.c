/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:49:39 by gpavel            #+#    #+#             */
/*   Updated: 2021/04/11 12:54:25 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	ft_print_hex(char *str, int i)
{
	int cont; 

	cont = 0;
	while (i >= 0)
	{
		ft_putchar_fd(str[i], 0);
		i--;
		cont++;
	}
	return (cont);
}

static int	ft_to_hex(int dn, char c,int cont)
{
	int		co;
	int		r;
	int		i;
	char	str[100];

	i = 0;
	co = dn;
	while (co != 0)
	{
		r = co % 16;
		if (r < 10)
			r = r + 48;
		else 
		{
			if (c == 'x')
				r = r + 87;
			if (c == 'X')
				r = r + 55;
		}
		str[i++] = r;
		co = co / 16;
	}
	str[i] = '\0';
	cont = ft_print_hex(str, i);
	return (cont);
}


int			ft_printf_xX(va_list ap, char c)
{
	unsigned int		x;
	int		cont;

	cont = 0;
	x = (unsigned int)va_arg(ap, unsigned int);
	cont = ft_to_hex(x, c, cont);
	return (cont);
}