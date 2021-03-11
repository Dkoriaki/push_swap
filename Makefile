NAME_PS		=	push_swap

NAME_C		=	checker

#SRCS_PS		=	./srcs/

SRCS_C		=	./srcs/checker/checker.c \
					./srcs/utils/get_next_line.c \
					./srcs/utils/get_next_line_utils.c \
					./srcs/utils/parsing.c

#OBJS_PS		=	$(SRCS_PS:.c=.o)

OBJS_C		=	$(SRCS_C:.c=.o)

INCLUDES	=	./includes

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

HEAD		=	-I$(INCLUDES)

all:			$(NAME_C) #$(NAME_PS)

%.o: %.c
				$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

#$(NAME_PS) :	$(OBJS_PS)
#					$(CC) $(OBJS_PS) $(HEAD) $(CFLAGS) -o $@

$(NAME_C) :	$(OBJS_C)
					$(CC) $(OBJS_C) $(HEAD) $(CFLAGS) -o $@

clean :
				rm -f $(OBJS_C)
#				rm -f $(OBJS_PS)

fclean :	clean
				rm -f $(NAME_C)
#				rm -f (NAME_PS)

re :		fclean all

.PHONY: all clean fclean re