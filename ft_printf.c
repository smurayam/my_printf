/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:30:42 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/15 01:17:31 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ifで他の型ぜんぶいれる

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += ft_printf_char(va_arg(args, int));
			if (*format == 's')
				count += ft_printf_str(va_arg(args, char *));
			if (*format == 'p')
				count += ft_printf_ptr(va_arg(args, unsigned int));
			if (*format == 'd' || format == 'i')
				ft_print_decimal(va_arg(args, char *));
			if (*format == 'u')
				ft_printf_unsigned(va_arg(args, unsigned int));
			if (*format == 'x' || format == 'X')
				ft_printf_hex(va_arg(args, unsigned int));
			if (*format == '%')
				count += ft_printf_percent();
			else if (*format == 's')
				count += ft_printf_str(va_arg(args, char *));
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	printf("%s%p\n", "wa", NULL);
// 	ft_printf("%s%p\n", "wa", NULL);
// 	return (0);
// }
