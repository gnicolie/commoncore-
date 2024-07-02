/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipexmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:13:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/06/30 21:13:04 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**findenv(char **envp)
{
	
}

int	main(int argc, char **argv, char **envp)
{
	char	**path;

	path = findenv(envp);
}
