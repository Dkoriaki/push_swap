NAME_PS		=	push_swap

NAME_C		=	checker

SRCS_PS		=	./srcs/

SRCS_C		=	./srcs/

OBJS_PS		=	$(SRCS_PS:.c=.o)

OBJS_C		=	$(SRCS_C:.c=.o)

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

all:			$(NAME_PS) $(NAME_C)

%.o: %.c
				$(CC) $(CFLAGS) -c $<

$(NAME_PS) :	$(OBJS_PS)
					