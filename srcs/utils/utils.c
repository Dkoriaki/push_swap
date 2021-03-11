/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:07:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2021/03/10 14:26:26 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(int ac, char **av)
{
	t_pile	*pile_a;
	t_pile	*pile_b;

	(void)ac;
	if (!(pile_a = malloc(sizeof(t_pile))))
		return ;
	if (!(pile_b = malloc(sizeof(t_pile))))
		return ;
	pile_a->nb = ft_atoi(av[1]);
	printf("a[0] = %d", pile_a->nb);
	pile_a->next = NULL;
	pile_b->nb = 0;
	pile_b->next = NULL;
}

int		ft_atoi(const char *str)
{
	int	i;
	int	negativ;
	int	nb;
	int	count;

	i = 0;
	negativ = 0;
	nb = 0;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negativ++;
		count++;
		if (count > 1)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - 48);
	return ((negativ != 0) ? -nb : nb);
}
