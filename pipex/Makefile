# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 16:55:56 by gnicolie          #+#    #+#              #
#    Updated: 2024/06/30 17:48:10 by gnicolie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
PRINTF_PATH = ./printf
PRINTF = $(PRINTF_PATH)/libftprintf.a

SRCS =   pipexmain.c

OBJS = $(SRCS:.c=.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	    $(CC) $(CFLAGS) -o $@ $(OBJS) -L$(LIBFT_PATH) -lft -L$(PRINTF_PATH) -lftprintf
$(LIBFT):
	make -C $(LIBFT_PATH) all
$(PRINTF):
	make -C $(PRINTF_PATH) all
all: $(NAME)
clean:
	rm -f $(OBJS) 
	make -C $(LIBFT_PATH) clean
	make -C $(PRINTF_PATH) clean
	
fclean: clean 
	rm -f $(NAME) 
	make -C $(LIBFT_PATH) fclean
	make -C $(PRINTF_PATH) fclean 

re: clean all

.PHONY: all clean fclean re libft