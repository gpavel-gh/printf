/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAIN.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:39:45 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/09 12:01:56 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int 	x;
	int		x1;
	
	x = printf("hola Mundo %d hola %c %s %%\n", 123, '.', " Hola pepito");
	printf("%d\n", x);
	x1 = ft_printf("hola Mundo %d hola %c %s %%\n", 123, '.', " hola pepito");
	printf("%d\n", x1);
	return (0);
}