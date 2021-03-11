
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:07:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2021/03/10 14:26:26 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_strlen(char *str, int m)
{
	int	i;

	i = 0;
	if (str)
	{
		if (m == 1)
			while (str[i])
				i++;
		if (m == 2)
			while (str[i] != '\n')
				i++;
	}
	return (i);
}

int		ft_eol(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == '\n')
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_substr(char *str, unsigned int start, int len)
{
	char	*result;
	int		i;
	int		size;

	if (!str)
		return (NULL);
	size = ft_strlen(str, 1);
	size = size - start;
	if (size > len)
		size = len;
	if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (str[i + start] && i < len)
	{
		result[i] = str[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_null(void)
{
	char	*result;

	if (!(result = malloc(sizeof(char) + 1)))
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_result(char *buffer, char *result, int ret)
{
	char	*cpy;
	char	*res;

	buffer[ret] = '\0';
	cpy = result;
	res = ft_strjoin(result, buffer);
	free(cpy);
	return (res);
}