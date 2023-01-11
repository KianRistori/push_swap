NAME = push_swap

CHECKER = checker

SRC = push_swap.c utils.c swap.c rotate.c reverse_rotate.c push.c check.c \
		sort.c sort_big_stack.c sort_3_n_stack.c sort_5_n_stack.c free.c sort_2_n_stack.c utils2.c \
		get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

BONUS = checker.c utils.c swap.c rotate.c reverse_rotate.c push.c check.c \
		sort.c sort_big_stack.c sort_3_n_stack.c sort_5_n_stack.c free.c sort_2_n_stack.c utils2.c \
		get_next_line.c get_next_line_utils.c checker_push.c checker_reverse_rotate.c checker_rotate.c checker_swap.c

OBJ_BONUS	= $(BONUS:.c=.o)

LIBFT = @libft/Makefile
FLAGS = -Wall -Wextra -Werror
LIB = libft/libft.a
NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all:  $(LIBFT) $(NAME) $(CHECKER)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@gcc $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)
	@rm $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     Deleted object files" $(NONE)

$(LIBFT):
	@echo $(CURSIVE)$(GRAY) "     - Compiling Libft ..."
	@make all -s -C libft
	@echo $(GREEN)"- Libft ready -"


$(OBJ): $(SRC)
	@echo $(CURSIVE)$(GRAY) "     - Making object files..." $(NONE)
	@gcc $(FLAGS) -c $(SRC)

$(CHECKER):
	@echo $(CURSIVE)$(GRAY) "     - Making object files..." $(NONE)
	@gcc $(FLAGS) -c $(BONUS)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(CHECKER)..." $(NONE)
	@gcc $(FLAGS) $(OBJ_BONUS) $(LIB) -o $(CHECKER)
	@echo $(GREEN)"- Compiled -"$(NONE)
	@rm $(OBJ_BONUS)
	@echo $(CURSIVE)$(GRAY) "     Deleted object files" $(NONE)

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	@rm -rf $(OBJ) $(OBJ_BONUS)
	@make -s -C libft clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME) and $(CHECKER)..." $(NONE)
	@rm -rf $(NAME)
	@rm -rf $(CHECKER)
	@make -s -C libft fclean

bonus: $(LIBFT) $(CHECKER)

re: fclean all
