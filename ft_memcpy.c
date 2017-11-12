/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:27:47 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/12 19:47:58 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	if (d == s && n == 0)
		return (d);
	dst = (unsigned char *)d;
	src = (unsigned char *)s;
	while (n--)
		*dst++ = *src++;
	return (d);
}
