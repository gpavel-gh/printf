/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:34:04 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/20 16:04:05 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!(!s))
	{
		while (*s != '\0')
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}

int	ft_putnbr_fd(int n, int fd)
{
	long int 	n2;
	int			cont;

	n2 = n;
	cont = 0;
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = n2 * -1;
		cont = 1;
	}
	if (n2 > 9)
		ft_putnbr_fd(n2 / 10, fd);
	ft_putchar_fd((n2 % 10) + 48, fd);
	cont ++;
	return (cont);
}

void	ft_bzero(void *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

char	*ft_strnew(size_t n)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	ft_bzero(str, n);
	return (str);
}