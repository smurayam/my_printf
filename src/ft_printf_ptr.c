/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:22:51 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/07 23:13:14 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf_ptr(void *ptr)
{
	unsigned long	ptr_inside;
	int				count;

	if (!ptr) // NULL の場合
		return (write(1, "(nil)", 5));
	
	ptr_inside = (uintptr_t)ptr;
	
	ptr_inside = &ptr;
	count = 0;
	write(1, "0x", 2);
	while(ptr_inside[count] = 0)
	{
		print_hex(ptr);
		count++;
	}
}

int	main(void)
{
	void	*ptr;

	ptr = 'a';
	ft_printf_ptr(ptr);
	return (0);
}
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