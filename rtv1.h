/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:44:20 by ghavenga          #+#    #+#             */
/*   Updated: 2016/07/12 08:22:09 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include <minilibx.h>
# include <math.h>

# define FOV 45
# define WINX 800
# define WINY 600
# define CXO 400
# define CYO 300

/*Colours*/
# define WHITE FFFFFF
# define BLACK 000000
# define GRAY 0F0F0F
# define RED FF0000
# define GREEN 00FF00
# define BLUE 0000FF

typedef struct		s_scene
{
	void			*mlx;
	void			*win;
	t_camera		*camera;
	t_object		*obj_1;
	t_object		*light_1;
}					t_scene;

typedef	struct		s_camera;
{
	t_vertex		*origin;
	t_plane			*screen;
}					t_camera;

typedef struct		s_object
{
	int				type;
	void			*info;
	t_object		*next;
}					t_object;

typedef struct		s_vertex
{
	float			x;
	float			y;
	float			z;
}					t_vertex;

typedef struct		s_light
{
	t_vertex		*origin;
	int				intensity;
	int				colour;
}					t_light;

typedef struct		s_cylinder
{
	t_vertex		*apex_o;
	t_vertex		*base_o;
	float			r;
	int				colour;
}					t_cylinder;

typedef struct		s_plane
{
	t_vertex		*tl;
	t_vertex		*tr;
	t_vertex		*bl;
	t_vertex		*br;
	int				colour;
}					t_plane;

typedef struct		s_cube
{
	t_vertex		*tl;
	t_vertex		*tr;
	t_vertex		*bl;
	t_vertex		*br;
	int				depth;
	int				colour;
}					t_cube;

typedef struct		s_sphere
{
	t_vertex		origin;
	float			radius;
	int				colour;
}					t_sphere;

typedef struct		s_cone
{
	t_vertex		apex;
	t_vertex		base_o;
	float			r;
	int				colour;
}					t_cone;

/*rtv1.c*/
int		readscene(int fd, t_scene *scene);

#endif
