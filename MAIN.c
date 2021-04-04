/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAIN.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:39:45 by gpavel            #+#    #+#             */
/*   Updated: 2021/04/02 11:45:29 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int 	x;
	int		x1;
	char	*strarg = "|%p|";

	x = printf(strarg, &strarg);
	printf("%d\n", x);

	x1 = ft_printf(strarg, &strarg);
	printf("%d\n", x1);
	
	
	
	return (0);

}