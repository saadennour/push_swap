NAME=push_swap

BNAME=checker

CC=gcc

SRCS= push_swap.c tools.c ll_functions.c double_hit.c instructions.c gods_hand.c robben.c min_sort.c big_sort.c itoa.c get_next_line.c get_next_line_utils.c sidekicks.c ft_split.c

BSRCS= tools.c ll_functions.c double_hit.c instructions.c gods_hand.c robben.c min_sort.c big_sort.c itoa.c get_next_line.c get_next_line_utils.c sidekicks.c ft_split.c checker.c

FLAGS=-Wall -Wextra -Werror 



all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

bonus:
	$(CC) $(FLAGS) $(BSRCS) -o $(BNAME)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all bonus