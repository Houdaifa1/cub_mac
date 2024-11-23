NAME = cub3d

SOURCES = test.c

CFLAGS = -Wall -Wextra -Werror -w

# FLAGS = -L ./minilibx-linux/ -lmlx -lXext -lX11 -lm -lz
FLAGS = ./minilibx/libmlx.a -framework OpenGL -framework AppKit

all : $(NAME)

$(NAME) : $(SOURCES)
	cc $(CFLAGS) $(SOURCES) $(FLAGS) -o $(NAME)

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
