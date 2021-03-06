/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 15:31:27 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/01 20:05:28 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	temp = 0;
	i = 0;
	size--;
	while (size > i)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}
