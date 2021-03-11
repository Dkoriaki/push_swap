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
# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 64

typedef struct	s_pile {
	int				nb;
	struct s_pile	*next;
}				t_pile;

int				ft_atoi(const char *str);
void			ft_init(int ac, char **av);
int				ft_check_args(int ac, char **av);
int				ft_isdigit(char *nb);
int				get_next_line(int fd, char **line);
int				ft_return(char **line, char *result, char **tmp, int ret);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_result(char *buffer, char *result, int ret);
char			*ft_null(void);
char			*ft_substr(char *str, unsigned int start, int len);
int				ft_eol(char *str);
int				ft_strlen(char *str, int m);

#endif