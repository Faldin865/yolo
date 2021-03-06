/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:31:21 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/03 16:44:14 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_print(char str)
{
	int hex;

	hex = str % 16;
	if (hex < 10)
	{
		ft_putchar('\\');
		ft_putchar(48 + str / 16);
		ft_putchar(48 + hex);
	}
	else
	{
		ft_putchar('\\');
		ft_putchar(48 + str / 16);
		ft_putchar(87 + hex);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			ft_hex_print(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
