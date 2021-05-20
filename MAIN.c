/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAIN.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:39:45 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/20 16:34:14 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int 	x;
	int		x1;
	char		*str = "hello world";

	x = printf("%p\n", str);
	printf("%d\n", x);

	x1 = ft_printf("%p\n", str);
	printf("\n%d\n", x1);

	return (0);

}