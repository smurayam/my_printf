/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:13:58 by smurayam          #+#    #+#             */
/*   Updated: 2025/01/23 19:40:28 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int count = 0;

	va_start(args, format);	
	while (*format)
	{
		if(*format == '%')
		{
			format ++;
			if(*format == 'c')
				count += ft_printf_char(va_arg(args, int));
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

int main()
{
	honke
	tasikame
}