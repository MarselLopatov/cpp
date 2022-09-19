NAME = phonebook

CC = c++ -g3

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = $(shell ls *.hpp)

SRC = $(shell ls *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o	:	%.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean	:
		rm -rf $(OBJ)

fclean	:	clean
		rm -rf $(NAME)

re	:	clean all

.PHONY : all fclean clean re