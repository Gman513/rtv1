#ifndef RTV1_H
# define RTV1_H

#include <stdio.h>
#include "mlx.h"
#include <stdbool.h>

# define H 600
# define W 800

# define WHITE 0xFFFFFF
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

typedef struct	s_rgb
{
    int			red;
    int			green;
    int			blue;
}				t_rgb;

#endif
