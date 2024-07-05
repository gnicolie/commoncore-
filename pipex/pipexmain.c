/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipexmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:13:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/07/05 22:00:26 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**findpaths(char **envp)
{
	char	**paths;

	while (ft_strncmp(*envp, "PATH", 4) != 0)
		envp++;
	paths = ft_split(*envp +5, ':');
	return (paths);
}

char	**getargs(char **argv, int argc)
{
	char	**args;

	*argv = *argv +2;
	while (ft_strncmp(*envp, "PATH", 4) != 0)
		envp++;
	paths = ft_split(*envp +5, ' ');
	return (paths);
}

/* char	execfunc(char *path, char *cmd )
{
	while (acc)
	{
		
	}
	
} */

int	main(int argc, char **argv, char **envp)
{
	char	**paths;
	char	**args;

	if (argc != 5)
		ft_printf("ERROR");
	paths = findpaths(envp);
	args = getargs(argv, argc);

	/* ft_printf("%s\n",argv[0]);
	while (*paths)
	{
		ft_printf("%s\n",*paths);
		paths++;
	} */
}

