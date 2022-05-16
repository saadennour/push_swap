NAME=push_swap

BNAME=checker

CC=gcc

SRCS= push_swap.c errors.c tools.c ll_functions.c double_hit.c instructions.c gods_hand.c robben.c min_sort.c big_sort.c itoa.c sidekicks.c get_next_line_utils.c

BSRCS= ./bonus/errors_bonus.c ./bonus/tools_bonus.c ./bonus/ll_functions_bonus.c ./bonus/double_hit_bonus.c ./bonus/instructions_bonus.c ./bonus/gods_hand_bonus.c ./bonus/itoa_bonus.c ./bonus/get_next_line_bonus.c ./bonus/get_next_line_utils_bonus.c ./bonus/ft_split_bonus.c ./bonus/checker_bonus.c

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
	rm -rf $(NAME) $(BNAME)

re: fclean all bonus