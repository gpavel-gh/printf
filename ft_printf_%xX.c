/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:27:41 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/25 16:13:40 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_take_value(unsigned int n, char c)
{
	char				x;

	x = 48;
	if (n <= 9)
		x += n;
	else
	 	if (c == 'x')
			x = x + 39 + n;
	 	if (c == 'X')
			x = x + 7 + n;
	return (x);
}
static int	ft_take_len(unsigned long int nb, unsigned long int base)
{
	int					len;

	len = 0;
	while (nb)
	{
		nb	/= base;
		len++;
	}
	return (len);
}

char		*ft_printf_xX(unsigned long int	nb, int base, char c)
{
	unsigned long int	n;
	unsigned int		r;
	int					len;
	char				*str;

	if (!(str = ft_strnew(1)))
		return (NULL);
	if (nb == '0')
	{
		*str = '0';
		return(str);
	}
	n = nb;
	len = ft_take_len(nb, base);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (n)
	{
		r = (n % base);
		n /= base;
		str[(len--) - 1] = ft_take_value(r, c);
	}
	return (str);
}
