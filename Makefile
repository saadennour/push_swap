NAME=push_swap

BNAME=checker

CC=gcc

SRCS= push_swap.c errors.c tools.c ll_functions.c double_hit.c instructions.c gods_hand.c robben.c min_sort.c big_sort.c itoa.c get_next_line.c get_next_line_utils.c sidekicks.c ft_split.c

BSRCS= errors.c tools.c ll_functions.c double_hit.c instructions.c gods_hand.c robben.c min_sort.c big_sort.c itoa.c get_next_line.c get_next_line_utils.c sidekicks.c ft_split.c checker.c

OBJS = $(SRCS:.c=.o)

BOBJS = $(BSRCS:.c=.o)

FLAGS=-Wall -Wextra -Werror 



all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

bonus: $(BOBJS)
	$(CC) $(FLAGS) $(BSRCS) -o $(BNAME)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all bonus