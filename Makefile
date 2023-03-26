NAME      	= cub3D
SRCS      	= $(wildcard ./game/*.c ./parse/*.c)
OBJS      	= $(SRCS:.c=.o)
CC			= cc
INCLUDE 	= -I./headers
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror

%.o : %.c
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
