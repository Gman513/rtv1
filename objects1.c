/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 09:02:47 by ghavenga          #+#    #+#             */
/*   Updated: 2016/07/12 12:16:13 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	makelight(char **line, t_scene *scene)
{
	scene->light_1.origin.x = line[1];
	scene->light_1.origin.y = line[2];
	scene->light_1.origin.z = line[3];
	scene->light_1.intensity = line[4];
	scene->light_1.colour = line[5];
}

void	makecamera(char **line, t_scene *scene)
{
	scene->camera.origin.x = line[1];
	scene->camera.origin.y = line[2];
	scene->camera.origin.z = line[3];
	scene->screen_o.x = scene->camera.origin.x + FOV;
	scene->screen_o.x = scene->camera.origin.y;
	scene->screen_o.x = scene->camera.origin.y;
}

/*void	makecylinder(char **line, t_scene *scene)
{

}*/

void			makesphere(char **line, t_scene *scene)
{
	t_sphere	sphere;

	scene->light.origin.x = line[1];
	scene->light.origin.y = line[2];
	scene->light.origin.z = line[3];
	scene->light.intensity = line[4];
	scene->light.colour = line[5];

	scene->obj_1.info = sphere;
}

/*void	makecone(char **line, t_scene *scene)
{

}*/
