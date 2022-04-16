NAME=push_swap

CC=gcc

SRCS= push_swap.c tools.c ll_functions.c instructions.c gods_hand.c sort_3.c sort_4.c sort_5.c

FLAGS=-Wall -Wextra -Werror 



all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all