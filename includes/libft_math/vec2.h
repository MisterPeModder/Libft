/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:30:22 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 14:21:39 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_H
# define VEC2_H

# include <stdlib.h>
# include "vectype.h"

typedef struct		s_vec2i
{
	t_vectype		type;
	int				*x;
	int				*y;
}					t_vec2i;

typedef struct		s_vec2f
{
	t_vectype		type;
	float			*x;
	float			*y;
}					t_vec2f;

typedef struct		s_vec2d
{
	t_vectype		type;
	double			*x;
	double			*y;
}					t_vec2d;

typedef struct		s_vec2x
{
	t_vectype		type;
	void			*x;
	void			*y;
}					t_vec2x;

typedef union		u_vec2
{
	t_vec2i			vec2i;
	t_vec2f			vec2f;
	t_vec2d			vec2d;
	t_vec2x			vec2x;
}					t_vec2;

t_vec2				*new_vec2(t_vectype type, const void **xy, size_t size);
t_vec2i				*new_vec2i(int x, int y);
t_vec2f				*new_vec2f(float x, float y);
t_vec2d				*new_vec2d(double x, double y);

void				del_vec2(void **vec2);

t_vec2				*add_vec2(const t_vec2 *lhs, const t_vec2 *rhs);
t_vec2i				*add_vec2i(const t_vec2i *lhs, const t_vec2i *rhs);
t_vec2f				*add_vec2f(const t_vec2f *lhs, const t_vec2f *rhs);
t_vec2d				*add_vec2d(const t_vec2d *lhs, const t_vec2d *rhs);

t_vec2				*addf_vec2(t_vec2 **lhs, t_vec2 **rhs);
t_vec2				*addf1_vec2(t_vec2 **lhs, const t_vec2 *rhs);
t_vec2				*addf2_vec2(const t_vec2 *lhs, t_vec2 **rhs);

#endif
