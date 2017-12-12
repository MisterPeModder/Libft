/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:36:38 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 13:06:31 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/base.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
