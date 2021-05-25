/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:33:56 by gpavel            #+#    #+#             */
/*   Updated: 2021/05/25 16:36:05 by gpavel           ###   ########.fr       */
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
char			*ft_printf_xX(unsigned long int nb, int base, char c);
int				ft_printf_u(va_list ap);
int				ft_printf_p(va_list ap);
int				ft_precision(va_list ap, char c);

//				*/ U T I L S \*         //

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_putnbr_fd(int n, int fd);
char			*ft_strnew(size_t n);
void			ft_bzero(void *str, size_t n);

#endif