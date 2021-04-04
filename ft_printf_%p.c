/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:44:55 by gpavel            #+#    #+#             */
/*   Updated: 2021/04/04 11:01:19 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int		ft_printf_p(va_list ap)
{
	char	*pointer;
	int		cont;
	char	*strp;

	pointer = va_arg(ap, void *);
	strp = (char *)malloc(500);
	strp[0] = pointer[0];
	strp[1] = pointer[1];
	strp[2] = pointer[2]; 
	cont = printf("TT%sTT\n", strp);
	free (strp);
	return (cont);
}
