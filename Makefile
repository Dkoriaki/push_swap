NAME_PS		=	push_swap

NAME_C		=	checker

SRCS_PS		=	./srcs/

SRCS_C		=	./srcs/

OBJS_PS		=	$(SRCS_PS:.c=.o)

OBJS_C		=	$(SRCS_C:.c=.o)

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

all:			$(NAME_C) $(NAME_PS)

%.o: %.c
				$(CC) $(CFLAGS) -c $<

$(NAME_PS) :	$(OBJS_PS)
					$(CC) $(OBJS_PS) $(CFLAGS) -o $@

$(NAME_C) :	$(OBJS_C)
					$(CC) $(OBJS_C) $(CFLAGS) -o $@

clean :
				rm -f $(OBJS_C)
				rm -f $(OBJS_PS)

fclean :	clean
				rm -f (NAME_C)
				rm -f (NAME_PS)

re :		fclean all

.PHONY: all clean fclean re