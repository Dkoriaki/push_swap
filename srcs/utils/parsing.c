/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:07:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2021/03/10 14:26:26 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_isdigit(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_args(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (ft_isdigit(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}