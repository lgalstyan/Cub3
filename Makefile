NAME      = cub3D
SRCS      = $(wildcard ./srcs/*.c ./game/*.c ./parse/*.c)
OBJS      = $(patsubst $(SRCS), ./%.o, $(SRCS)
CC			  = cc
INCLUDE 	= -I./headers
RM			  = rm -rf
CFLAGS		= -Wall -Wextra -Werror

./%.o: $(SRCS) $(INCLUDE)
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

	all: $(NAME)

	$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(INCLUDE) $(OBJS)  -o $(NAME)

	clean :
		$(RM) $(OBJS)

	fclean : clean
			$(RM) $(NAME)

	re : fclean all

	.PHONY: all clean fclean re

