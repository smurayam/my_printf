/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:37:50 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/02 22:50:37 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_printf_str(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str)
		return (-1);
	while (str[cnt] != 0)
		cnt++;
	write(1, str, cnt);
	return (cnt);
}

int	main(void)
{
	char *s = "\0";
	printf("%s\n", s);
	ft_printf_str("%s\n");
	return (0);
	1
}