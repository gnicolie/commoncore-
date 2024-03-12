/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:00:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/03/12 16:09:19 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

char	*get_next_line(int fd);
char	*update_stash(char *stash);
char	*select_line(char *stash);
char	*read_s(int fd, char *stash);
size_t	ft_strlen(const char *s);
int		ft_strnl(char *s);
char	*join(char *buffer, char *stash);

#endif