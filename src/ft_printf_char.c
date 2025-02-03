/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:21:31 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/02 23:12:10 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printf_char(int c)
{
	char	ch;

	ch = c;
	write(1, &ch, 1);
}

int	main(void)
{
	int c = 'a';
	ft_printf_char(c);

	return (0);
}