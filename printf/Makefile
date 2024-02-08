# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 18:43:30 by gnicolie          #+#    #+#              #
#    Updated: 2024/02/08 18:24:19 by gnicolie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS =  
BONUS_SRCS = 
					 

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT)$(OBJS)
	ar rcs $(NAME) $(LIBFT) $(OBJS)
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBFT):
	make -c $(LIBFT_PATH)	
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	
fclean: clean 
	rm -f $(NAME) $(OBJS) $(BONUS_OBJS)
re: fclean all

.PHONY: clean fclean re all
