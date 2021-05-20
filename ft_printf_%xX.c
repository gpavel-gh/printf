/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:27:41 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/20 16:22:51 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
static char	ft_take_value(unsigned long int n, char c)
{
	char				x;

	x = 40;
	if (n <= 9)
		x += n;
	x += 47;
	if (c == 'X')
		x -= 32;
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

char		*ft_printf_xX(unsigned long int	nb, unsigned int base, char c)
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
	while (n)
	{
		r = (n % base);
		n /= base;
		str[(len--) - 1] = ft_take_value(r, c);
	}
	return (str);
}
