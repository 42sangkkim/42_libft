/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:15:44 by sangkkim          #+#    #+#             */
/*   Updated: 2022/06/20 13:21:50 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *b, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (n--)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);
}
