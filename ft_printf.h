/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:33:56 by gpavel            #+#    #+#             */
/*   Updated: 2021/02/12 12:49:55 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>


int				main(void);
int				ft_printf(char *str, ...);
int				ft_printf_analyzer(char *str, va_list ap);
int				ft_printf_s(va_list ap);
int				ft_printf_d(va_list ap);
int				ft_printf_c(va_list ap);
int				ft_printf_xX(va_list ap, char c);
int				ft_printf_u(va_list ap);
int				ft_printf_p(va_list ap);


void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_putnbr_fd(int n, int fd);


#endif