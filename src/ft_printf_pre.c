/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:13:58 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:37 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

//可変長引数、なんのためにつかうか（順番に。。なんかみれる。何個でも）
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	// かた
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += ft_printf_char(va_arg(args, int));
			// va_argは次の引数をかえす
			else if (*format == 's')
				count += ft_printf_str(va_arg(args, *char));
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
// 	printf("ab%dcd%s", 180, "yaho");
// 	// koreegui
// 	// honke
// 	// tasikame
// 	return (0);
// }