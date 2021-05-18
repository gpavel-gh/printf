/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:49:39 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/13 17:16:11 by gpavel           ###   ########.fr       */
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

static int	ft_to_negative_hex(int	x, char c, int cont)
{
	int r;
	int i;
	char str[9] = "FFFFFFFF";
	int d;

	i = -1;
	d = x;
	while (x != 0 && i < 7)
	{
		i++;
		r = x % 16;
		if (r > 0 && r < 7)
		{
			if (c == 'x')
				str[7 - i] = 103 - r;
			if (c == 'X')
				str[7 - i] = 71 - r;
		}
		else 
		{
			if (r == 0)
				r = 16;
			str [7 - i] = 64 - r;
		}
		x = x / 16;
		if (x == 1 && d != 16)
			x++;
	}
	ft_putstr_fd(str, 0);
	return (cont = 8);

}

int			ft_printf_xX(va_list ap, char c)
{
	int		x;
	int		cont;

	cont = 0;
	x = (int)va_arg(ap, int);
	if (x == 0)
		ft_print_hex("0", 0);
	if (x < 0)
	{
		x = x * -1;
		cont = ft_to_negative_hex(x, c, cont);
	}
	else 
		cont = ft_to_hex(x, c, cont);
	return (cont);
}