/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:26:13 by gpavel            #+#    #+#             */
/*   Updated: 2021/07/28 15:12:20 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void		ft_precision_i(va_list ap, int *cont)
{
	struct mystruct var;
	int				x;
	int				n;

	n = (int)va_arg(ap, int);
	if (n < 0)
	{


	}


}