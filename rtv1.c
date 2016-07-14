/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:44:49 by ghavenga          #+#    #+#             */
/*   Updated: 2016/07/12 10:33:24 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int			main(int argc, char *argv)
{
	int		fd;
	t_scene	scene;


	//prepscene(scene);
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

	while (get_next_line(&buffer, fd))
	{
		line = ft_strsplit(&buffer, '\t');
		assignobject(&line, scene);
	}
	if (scene->camera == NULL || scene->obj_1 == NULL || scene->light_1 == NULL)
		return (-1);
	return (0);
}

void		prepscene(t_scene *scene)
{
	scene->mlx = mlx_init();
	scene->win = mlx_new_window(scene->mlx, WINX, WINY, RayTracer);
	camera = NULL;
	obj_1 = NULL;
	light_1 = NULL;
}

void		assignobject(char **line, t_scene *scene)
{
	if (ft_strcmp(line[0], "light") == 0)
		makelight(line, scene);
	else if (ft_strcmp(line[0], "camera") == 0)
		makecamera(line, scene);
//	else if (ft_strcmp(line[0], "cylinder") == 0)
//		makecylinder(line, scene);
	else if (ft_strcmp(line[0], "sphere") == 0)	
		makesphere(line, scene);
//	else if (ft_strcmp(line[0], "cone") == 0)	
//		makecone(line, scene);
//	else if (ft_strcmp(line[0], "cube") == 0)	
//		makecube(line, scene);
//	else if (ft_strcmp(line[0], "plane") == 0)	
//		makeplane(line, scene);
}
