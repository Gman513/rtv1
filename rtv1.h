/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:44:20 by ghavenga          #+#    #+#             */
/*   Updated: 2016/07/11 11:47:55 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include <minilibx.h>
# include <math.h>

# define FOV 45
# define WINX 800
# define WINY 600

typedef struct		s_scene
{
	t_camera		camera;
	t_object		obj_1;
}					t_scene;

typedef	struct		s_camera;
{
	t_vertex		origin;
	t_plane			screen;
}					t_camera;

typedef struct		s_object
{
	int				type;
	void			*shape;
	t_object		*next;
}					t_object;

typedef struct		s_vertex
{
	float			x;
	float			y;
	float			z;
}					t_vertex;

typedef struct		s_cylinder
{
	t_vertex		apex_o;
	t_vertex		base_o;
	float			r;
}					t_cylinder;

typedef struct		s_plane
{
	t_vertex		tl;
	t_vertex		tr;
	t_vertex		bl;
	t_vertex		br;
}					t_plane;

typedef struct		s_cube
{
	t_vertex		tfl;
	t_vertex		tfr;
	t_vertex		tbl;
	t_vertex		tbr;
	t_vertex		bfl;
	t_vertex		bfr;
	t_vertex		bbl;
	t_vertex		bbr;
}					t_cube;

typedef struct		s_sphere
{
	t_vertex		origin;
	float			radius;
}					t_sphere;

typedef struct		s_cone
{
	t_vertex		apex;
	t_vertex		base_o;
	float			r;
}					t_cone;

/*rtv1.c*/


#endif
