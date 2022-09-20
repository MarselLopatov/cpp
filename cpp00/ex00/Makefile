NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = megaphone.o

all : $(NAME)

$(NAME) : $(OBJ) 

%.o		:	%.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean				:
					rm -rf $(OBJ)

fclean				: clean
					rm -rf $(NAME)
re : clean all

.PHONY : all fclean clean re
