/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:07:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2021/03/10 14:26:26 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <write.h>
# include <stdlib.h>

typedef struct	s_pile {
	int				nb;
	struct s_pile	*next;
}				t_pile;

int				get_next_line(int fd, char **line);
int				ft_return(char **line, char *result, char **tmp, int ret);
char			*ft_gnl_strjoin(char *s1, char *s2);
char			*ft_result(char *buffer, char *result, int ret);
char			*ft_null(void);
char			*ft_gnl_substr(char *str, unsigned int start, int len);
int				ft_eol(char *str);
int				ft_gnl_strlen(char *str, int m);

#endif