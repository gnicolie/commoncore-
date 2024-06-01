# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 18:43:30 by gnicolie          #+#    #+#              #
#    Updated: 2024/06/01 19:18:04 by gnicolie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = ./printf/libft
LIBFT = $(LIBFT_PATH)/libft.a
PRINTF_PATH = ./printf
PRINTF = $(PRINTF_PATH)/libftprintf.a

SRCS =  push_swap.c\
		push.c\
		init_stack.c\
		utils.c\
		algorithm.c\
		swap.c\
		rotate.c\
		rrotate.c\
		turk.c\
		freerotate.c\


OBJS = $(SRCS:.c=.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)	
$(LIBFT):
	make -C $(LIBFT_PATH) all
$(PRINTF):
	make -C $(PRINTF_PATH) all
all: $(NAME)
clean:
	rm -f $(OBJS) 
	make -C $(LIBFT_PATH) clean
	make -C $(PRINTF_PATH)  clean
	
fclean:
	rm -f $(OBJS) $(NAME)
	make -C $(LIBFT_PATH) fclean
	make -C $(PRINTF_PATH)  fclean
re: fclean all

.PHONY: all clean fclean re libft