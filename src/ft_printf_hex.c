/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:55 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/07 22:30:40 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 16進数。%pのなかで使う気がする

// int	ft_print_hex(unsigned long num)
// {
// 	unsigned long	ul;
// 	int				i;

// 	ul = 0;
// 	i = 0;
// }

// 23dattara
//  23/16 = 1...7
//  126/16 = 7...14
// 7d
// int	main(void)
// {
// 	return (0);
// }
#define HEX_BASE "0123456789abcdef"

void	print_hex(unsigned int num)
{
	char	hex_digit;
	int		remainder;

	if (num >= 16)
		print_hex(num / 16);
	remainder = num % 16;
	hex_digit = HEX_BASE[remainder];
	write(1, &hex_digit, 1);
}

int	main(void)
{
	print_hex(42);
	return (0);
}
