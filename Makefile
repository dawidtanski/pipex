# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 11:51:06 by dtanski           #+#    #+#              #
#    Updated: 2024/10/22 12:43:10 by dtanski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= pipex

LIBFT 			= ./libft/libft.a
INC				= includes
SRC_DIR			= srcs/
OBJ_DIR			= obj/

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I
RM				= rm -f

SRCS			= srcs/pipex.c srcs/utils.c

OBJ				= $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))

all:			$(NAME)

$(LIBFT):
				@echo "$(RED)[ .. ] Compiling Libft..$(RESET)"
				@make -C ./libft
				@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Libft ready!$(RESET)"

$(NAME): 		$(OBJ) $(LIBFT)
				@echo "$(RED)[ .. ] Compiling Mandatory..$(RESET)"
				@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)
				@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Mandatory Ready!$(RESET)"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(OBJ_DIR)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@make clean -C ./libft
				@echo "Object files removed."

fclean: 		clean
				@$(RM) $(NAME)
				@$(RM) $(LIBFT)
				@echo "Binary files removed."

re: 			fclean all

.PHONY: 		start all clean fclean re

RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m
