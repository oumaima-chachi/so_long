NAME = so_long

# Directories
SRC_DIR = src
LIBFT_DIR = libft
MLX_DIR = /usr/include/minilibx-linux
GNL_DIR = get_next_line
FT_PRINTF_DIR = ft_printf
INC_DIR = includes

# Sources
SRCS = $(SRC_DIR)/main.c \
       $(SRC_DIR)/init.c \
	   $(SRC_DIR)/events_2.c \
       $(SRC_DIR)/parser.c \
       $(SRC_DIR)/parser_utils.c \
       $(SRC_DIR)/map_checker.c \
       $(SRC_DIR)/path_checker.c \
       $(SRC_DIR)/render.c \
       $(SRC_DIR)/events.c \
       $(SRC_DIR)/utils.c \
       $(GNL_DIR)/get_next_line.c \
       $(GNL_DIR)/get_next_line_utils.c

# Objects
OBJS = $(SRCS:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -I$(MLX_DIR) -I$(LIBFT_DIR) -I$(GNL_DIR) -I$(FT_PRINTF_DIR)

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a
MLX = $(MLX_DIR)/libmlx.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lz

# Rules
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(MLX) $(FT_PRINTF)
	$(CC) $(OBJS) $(LIBFT) $(MLX) $(FT_PRINTF) $(MLX_FLAGS) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MLX):
	@echo "Using system-installed MLX library"
	# No need to make MLX if it's system-installed

$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean
	make -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean
	make -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re