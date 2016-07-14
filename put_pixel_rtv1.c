#include "put_pixel_rtv1.h"

// subtract two vectors and return resulting vector

t_vector	vector_sub(t_vector *vect1, t_vector *vect2)
{
	t_vector	result = {vect1->x - vect2->x, vect1->y - vect2->y, vect1->z - vect2->z};
	return (result);
}

// Multiply two vectors and returning scalar

float	vector_scalar(t_vector *vect1, t_vector *vect2)
{
	return (vect1->x * vect2->x + vect1->y * vect2->y + vect1->z * vect2->z);
}

// check if ray and sphere intersect


bool	ray_sphere_intersect(t_ray *ray, t_sphere *sphere)
{
	float 		a;
	float 		b;
	float		c;
	float		discriminant;
    bool        retvalue;
	t_vector	distance;

	a = vector_scalar(&ray->direction, &ray->direction);
    distance = vector_sub(&ray->camera, &sphere->origin);
	b = 2 * vector_scalar(&ray->direction, &distance);
    c = vector_scalar(&distance, &distance) - (sphere->radius * sphere->radius);
	discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
		retvalue = false;
	else
    {
        float sqrtdiscr = sqrtf(discr);
        float t0 = (-B + sqrtdiscr)/(2);
        float t1 = (-B - sqrtdiscr)/(2);
        
        if(t0 > t1)
            t0 = t1;
        if((t0 > 0.001f) && (t0 < *t)){
            *t = t0;
            retval = true;
        }else
            retval = false;
    }
    return (retval);
    }
}

/*int shading (t_light *light, t_sphere *sphere)
{
    float 		a;
    float 		b;
    float		c;
    float		discriminant;
    t_vector	distance;
    
    a = vector_scalar(&ray->direction, &ray->direction);
    distance = vector_sub(&ray->camera, &sphere->origin);
    b = 2 * vector_scalar(&ray->direction, &distance);
    c = vector_scalar(&distance, &distance) - (sphere->radius * sphere->radius);
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
        return (false);
    else
        return (true);
}

*/

/* Calculate Vector x Scalar and return resulting Vector*/
t_vector    vector_scale(float c, t_vector *v)
{
    t_vector result = {v->x * c, v->y * c, v->z * c };
    return (result);
}

/* Add two vectors and return the resulting vector */
t_vector    vector_add(t_vector *v1, t_vector *v2)
{
    t_vector result = {v1->x + v2->x, v1->y + v2->y, v1->z + v2->z };
    return (result);
}

int main(int argc, char **argv)
{
	t_sphere	sphere;
	t_ray		ray;
    t_env       e;
    t_light     light;
	int			x;
	int			y;
	bool		hit;
    
    e.mlx = mlx_init();
    e.win = mlx_new_window(e.mlx, W, H, "RTv1");


	sphere.origin.x = 400;
	sphere.origin.y = 300;
	sphere.origin.z = 20;
	sphere.radius = 200;

	ray.direction.x = 0;
	ray.direction.y = 0;
	ray.direction.z = 1;

	ray.camera.z = 0;
    
    light.origin.x = 10;
    light.origin.y = 550;
    light.origin.z = 20;
    
	y = 0;
	while (y < H)
	{
		ray.camera.y = y;
		x = 0;
		while (x < W)
		{
			ray.camera.x = x;
			hit = ray_sphere_intersect(&ray, &sphere);
			if (hit)
//            {
//                shading (light.origin, sphere.origin)
				mlx_pixel_put(e.mlx, e.win, x, y, RED);
			else

                mlx_pixel_put(e.mlx, e.win, x, y, BLACK);
			x++;
		}
		y++;
		printf("\n");
	}
    mlx_loop(e.mlx);
}
