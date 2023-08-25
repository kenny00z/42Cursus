HEADER = libft.h

NAME = libft.a

SRCS := $(wildcard *.c)

OBJS	= $(SRCS:.c=.o)
CC		= gcc
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
MESSAGE = "Wubalubadubdub!:man_in_motorized_wheelchair:"

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(LIBC) $(NAME) $(OBJS)
	@echo $(MESSAGE)

all: $(NAME)


fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re