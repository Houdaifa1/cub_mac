# ifndef CUB_H
# define CUB_H

# include <math.h>
//# include <mlx.h>
# include "./minilibx/mlx.h"
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define cub_size 32
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 20
# define ROWS 19
# define COLS 24
# endif

# define M_PI 3.14159265358979323846

typedef  struct mlx
{
    void    *mlx_ptr;
    void    *mlx_wind;

} t_mlx_ptrs;

typedef struct player_info
{
    float         i;
    float         j;  
    int         move_direction;
    int         turn_direction;
    float       rotation_angle;
    float       move_speed;
    float       rotation_speed;
    int         fov_lenght;
    int         color;
    t_mlx_ptrs  *mlx_ptrs;

} t_player_info;




# endif