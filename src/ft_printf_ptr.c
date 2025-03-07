/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:22:51 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/07 22:25:07 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_printf_ptr(void *ptr)
{
	unsigned long	ptr_inside;
	int				count;

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