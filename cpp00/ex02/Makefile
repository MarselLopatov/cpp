NAME		=	test

SRC 		=	$(shell ls *cpp)
OBJ			=	$(SRC:.cpp=.o)
OBJS_DIR 	= 	objects/
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))



CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror



all 				: $(NAME)

$(NAME) 			: $(OBJS)
					$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(OBJS_DIR)%.o		:	%.cpp
					mkdir -p $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

clean				:
					rm -rf $(OBJS_DIR)

fclean				:	clean
					rm -rf $(NAME)
re : clean all

.PHONY: all clean fclean re