/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:44:49 by ghavenga          #+#    #+#             */
/*   Updated: 2016/07/12 08:09:07 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int			main(int argc, char *argv)
{
	int		fd;
	t_scene	scene;


	if (argc < 1)
	{
		fd = open(argv[1]);
		if (fd = -1)
			ft_puterror("Could Not Open File");
		else
			if (-1 = readscene(fd, scene))
				ft_puterror("Invalid Scene");
		//drawscene
		//showscene
	}
	else
		ft_puterror("No Arguements Given");
}

int			readscene(int fd, t_scene *scene)
{
	char	*buffer;
	char	**line;

	prepscene(scene);
	while (get_next_line(&buffer, fd))
	{
		line = ft_strsplit(&buffer, '\t');
		assignobject(&line, scene);
	}
	if (scene->camera == NULL || scene->obj_1 == NULL || scene->light_1 == NULL)
		return (-1);
	return (0);
}
