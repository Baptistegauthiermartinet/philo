NAME = philo
CC = cc -Wall -Werror -Wextra -g3
RM = rm -rf

SRC_PATH = ./src/
SRC_FILE = 	main.c\
			get_args.c
SRC = $(addprefix $(SRC_PATH), $(SRC_FILE))

OBJ_PATH = ./obj/
OBJ_FILE = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_FILE))

INCLUDE_PATH = ./include/
INCLUDE_FILE = philo.h
INC = $(addprefix $(INCLUDE_PATH), $(INCLUDE_FILE))

all : $(NAME)

$(NAME) : $(OBJ_PATH) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o : %.c $(INC)
	mkdir -p $(shell dirname $@)
	$(CC) -c $< -o $@

$(OBJ_PATH) :
	mkdir $@

clean :
	$(RM) $(OBJ_PATH)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re