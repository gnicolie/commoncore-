# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 18:43:30 by gnicolie          #+#    #+#              #
#    Updated: 2024/02/18 18:38:13 by gnicolie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS =  ft_printf.c\
		ft_pchar.c\
		ft_padd.c\
		ft_pstring.c\
		ft_pnbr.c\
		ft_pnbru.c\
		ft_phex.c\
		ft_phexm.c\
		
		
		

OBJS = $(SRCS:.c=.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME) 
		ar rcs $@ $^
$(LIBFT):
	make -C $(LIBFT_PATH) all
all: $(NAME)
clean:
	rm -f $(OBJS) 
	make -C $(LIBFT_PATH) clean
	
fclean: clean 
	rm -f $(NAME) 
	make -C $(LIBFT_PATH) fclean 
re: clean all

.PHONY: all clean fclean re libft