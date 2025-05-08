# Importante!: Tener en cuenta que este programa solo funcionará en macOs. (Revisar Warnings!!) (Comprobación en 42!) (Mirar el leak de memoria!!!)

# Program:
NAME = fract-ol

# Directories:
SRC_DIR = src
UTILS_DIR = utils
INC_DIR = inc
OBJS_DIR = obj

# MiniLibx Path & Library:
MLX_DIR = $(INC_DIR)/minilibx_macOs
MLX_LIB = $(MLX_DIR)/libmlx.a

# Libft Path & Library:
LIBFT_DIR = $(INC_DIR)/libft
LIBFT = $(LIBFT_DIR)/libft.a

# Sources: (Usamos Wildcard para encontrar todos los .c de los subdirectorios:)
SRC =	$(wildcard $(SRC_DIR)/*.c) \
		$(wildcard $(UTILS_DIR)/*.c)

#Nota: Aunque no sea una regla % tambien se puede usar par la transformación de arhvicos en funciones como patsubst
# OBJ (Archivos .o creados a partir de los .c)
OBJ =	$(patsubst $(SRC_DIR)/%.c, $(OBJS_DIR)/%.o, $(filter $(SRC_DIR)/%.c, $(SRC))) \
		$(patsubst $(UTILS_DIR)/%.c, $(OBJS_DIR)/%.o, $(filter $(UTILS_DIR)/%.c, $(SRC)))
		
# Frameworks:
FRAMEWORKS = -framework OpenGL -framework AppKit

# Flags y Compilacion:
CC = cc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(MLX_LIB) $(LIBFT) $(OBJ)
	@echo "Compiling:"
	@$(CC) $(CFLAGS) $(OBJ) -I$(INC_DIR) -I$(MLX_DIR) -L$(MLX_DIR) -lmlx -I$(LIBFT_DIR) -L$(LIBFT_DIR) -lft $(FRAMEWORKS) -o $(NAME)

$(MLX_LIB):
	@echo "Building MiniLibX"
	@make -C $(MLX_DIR)
$(LIBFT):
	@echo "Building Libft"
	@make -C $(LIBFT_DIR)

$(OBJS_DIR)/%.o : $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(MLX_DIR) -c $< -o $@

$(OBJS_DIR)/%.o : $(UTILS_DIR)/%.c
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(MLX_DIR) -c $< -o $@

clean:
	@echo "Cleaning..."
	@rm -f $(NAME)
	@rm -f $(OBJS_DIR)/*.o

fclean:  
	@make clean
	@make clean -C $(MLX_DIR)
	@make clean -C $(LIBFT_DIR)

re:
	@make fclean
	@echo "Rebuilding Everything..."
	@make
	@echo "Done :)"
