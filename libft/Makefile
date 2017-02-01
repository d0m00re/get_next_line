#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 18:24:12 by tribeiro          #+#    #+#              #
#    Updated: 2016/11/24 16:17:18 by tribeiro         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#################################################
### OPTION
##################################################

CC=gcc
CFLAGS= -Wall -Wextra -Werror
NAME=libft.a
SRC_PATH=srcs
SRC_M_LIBFT_PATH=s_ori
OBJ_PATH=srcs
INC_PATH=includes
LIB_PATH=libft
INC=libft/includes

#################################################
### COLOR
##################################################

COL_BLACK		= \033[1;30m
COL_RED			= \033[1;31m
COL_GREEN		= \033[1;32m
COL_YELLOW		= \033[1;33m
COL_BLUE		= \033[1;34m
COL_PURPLE		= \033[1;35m
COL_WHITE		= \033[1;37m

#################################################
### SOURCES
##################################################

SRC_M_LIBFT=ft_bzero.c\
ft_memdel.c\
ft_str_cut_includ_behind_sep.c\
ft_str_resize_concat.c\
ft_str_return_extract_line_behind_sep.c\
ft_strcat.c\
ft_strcpy.c\
ft_strdup.c\
ft_strlen.c

#################################################
### OBJECT
##################################################

OBJ_M_LIBFT=$(patsubst %.c, %.o, $(SRC_M_LIBFT))

#################################################
### FORMAT PATH
##################################################

SRC_M_L=$(addprefix ./$(SRC_M_LIBFT_PATH)/, $(SRC_M_LIBFT))

OBJ_M_L=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_LIBFT))

OBJS = $(OBJ_M_L)

#################################################
### RULES
##################################################

all: $(NAME)

$(NAME): $(OBJ_M_L)
	ar rc $(NAME) $(OBJS)

$(OBJ_M_L): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_LIBFT_PATH)%.c
	@echo "$(COL_PURPLE)[ COMPILE & ASSEMBLE STEPS : LIB ORI ] \n"
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

clean:
	@echo "$(COL_BLUE)[ CLEAN DIRECTORY ]\n"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(COL_BLUE)[ CLEAN DIRECTORY AND $(NAME) ]\n"
	@rm -f $(NAME)

re: fclean all
