NAME = push_swap
SRC = push_swap.c utils.c swap.c rotate.c reverse_rotate.c push.c check.c \
		sort.c sort_big_stack.c sort_3_n_stack.c sort_5_n_stack.c free.c sort_2_n_stack.c
OBJ = $(SRC:.c=.o)

LIBFT = @libft/Makefile
FLAGS = -Wall -Wextra -Werror
LIB = libft/libft.a
NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all:  $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@gcc $(FLAGS) $(OBJ) $(LIB) $(LINKS) -o $(NAME)
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

exe: all
	@echo "     - Executing $(NAME)... \n"
	@./$(NAME)
	@echo "\n     - Done -"

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	@rm -rf $(OBJ)
	@make -s -C libft clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	@rm -rf $(NAME)
	@make -s -C libft fclean

re: fclean all
