/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:00:49 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/20 10:43:15 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}