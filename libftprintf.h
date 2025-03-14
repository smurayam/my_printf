/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:21:08 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/15 05:54:26 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_printf_char(int c);
int		ft_printf_str(char *str);
int		ft_printf_ptr(void *ptr);
ssize_t	ft_print_decimal(int n, int fd);
int		ft_printf_unsigned(unsigned int ui);
int		print_hex(unsigned int num);
int		ft_printf_percent(void);
#endif