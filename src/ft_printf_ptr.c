/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:22:51 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/13 22:33:08 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	print_hex(unsigned int num);

int	ft_printf_ptr(void *ptr)
{
	unsigned long	ptr_inside;
	int				count;

	if (!ptr) // NULL の場合
		return (write(1, "(nil)", 5));
	ptr_inside = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += print_hex(ptr_inside);
	return (count);
}

// int	main(void)
// {
// 	void	*ptr;

// 	ptr = "auch";
// 	ft_printf_ptr(ptr);
// 	return (0);
// }

// uintptr_p narumonogaarurasii

// int	ft_printf_ptr(void *ptr)
// {
// 	unsigned long	ptr_inside;
// 	int				i;

// 	ptr_inside = &ptr;
// 	i = 0;
// 	while (ptr_inside[i])
// 	{
// 		write(1, ptr_inside[i], 1);
// 		i++;
// 	}
// 	return (i);
// }

// int	main(void)
// {
// 	char *ptr = "waha";
// 	ft_printf_ptr(ptr);
// 	printf("%p", ptr);
// 	return (0);
// }