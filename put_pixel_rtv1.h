#ifndef PUT_PIXEL_RTV1_H
# define PUT_PIXEL_RTV1_H

#include <stdio.h>
#include "mlx.h"
#include <stdbool.h>

# define H 600
# define W 800

# define BLACK  0x000000
# define RED 0xFF0000

typedef struct	s_vector
{
	float	x;
	float	y;
	float	z;
}				t_vector;

typedef struct	s_sphere
{
	t_vector	origin;
	float		radius;
}				t_sphere;

typedef	struct	ray
{
	t_vector	camera;
	t_vector	direction;
}				t_ray;

typedef struct  s_light
{
    t_vector    origin;
   // t_colour    intensity;
}               t_light;

typedef struct  s_colour
{
    float       red;
    float       green;
    float       blue;
}               t_colour;

typedef struct  s_material
{
    t_colour    diffuse;
    float       reflection;
}               t_material;

typedef struct	s_env
{
    void		*win;
    void		*mlx;
   // t_img		img;
   // t_view	    view;
  //  t_map		map;
    //t_ray		r;
}				t_env;

/*typedef struct	s_img
{
    void		*img;
    char		*data;
    int			bpp;
    int			size;
    int			endian;
}   §           t_img;
 
 */

#endif
