/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:00:08 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/06 06:06:26 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// 数字からascii putnbr出力だけ違う
int	check_digit(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
char	*ft_utoa(unsigned int n)
{
	int		i;
	char	*ptr;

	i = check_digit(n);
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	while (i > 0)
	{
		ptr[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int n = -42;
// 	printf("%u\n", n);
// 	printf("%s\n", ft_utoa(n));
// 	return (0);
// }