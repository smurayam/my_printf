/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:22:51 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/08 18:32:14 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printf_ptr(char *ptr)
{
	char	*ptr_inside;
	int		i;

	i = 0;
	ptr_inside = ptr;
	while (ptr_inside[i])
	{
		write(1, ptr_inside[i], 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	char *ptr;
	ft_printf_ptr(ptr);
	printf("%p", ptr);
	return (0);
}