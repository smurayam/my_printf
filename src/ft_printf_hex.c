/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:55 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/21 23:07:03 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 16進数。%pのなかで使う気がする

int	ft_print_hex(unsigned long num)
{
	unsigned long	ul;
	int				i;

	ul = 0;
	i = 0;
}

// 23dattara
//  23/16 = 1...7
//  126/16 = 7...14
// 7d
// int	main(void)
// {
// 	return (0);
// }
#define BASE "0123456789abcdef"

int	sixteen_sinsu_function(unsigned int num)
{
	char	*jyuurock;
	char	*kokoniireru;
	int		saigoniamari;

	if (num >= 16)
		kokoniireru = num / 16;
	saigoniamari = num % 16;
	kokoniireru = BASE[saigoniamari];
	kokoniireru = saigoniamari;
}
123

		3 *
		(16 * *0) +
	2 * (16 * *1) + 1 * (16 * *2)