/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:49:39 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/18 20:04:51 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static char	*ft_set_str(char *str, unsigned long int i)
{
	char	aux[100];
	int		len;
	int		n;

	len = 0;
	n = 0;
	while (i)
	{
		i /= 16;
		len++;
	}
	while (str)
		str++;
	while (len-- > 0)
		aux[n++] = *str--;
	aux[n] = '\0';
	return (aux);
}

static char	*ft_decimal_to_hex(unsigned long int dn, char c)
{
	unsigned long int	co;
	unsigned int		r;
	int					i;
	char				str[100];

	i = 0;
	co = dn;
	while (co)
	{
		r = co % 16;
		if (r < 10)
			r = r + 48;
		else
		{
			if (c == 'x')
				r += 87;
			if (c == 'X')
				r += 55;
		}
		str[i++] = r;
		co /= 16;
	}
	str[i] = '\0';
	return (str);
}

int			ft_printf_xX(va_list ap, char c)
{
	unsigned long int		x;
	char	*str;

	x = (unsigned long int)va_arg(ap, int);
	str = ft_decimal_to_hex(x, c);
	str = ft_set_str(str, x);
	printf("<%s>", str);
	return (1);
}