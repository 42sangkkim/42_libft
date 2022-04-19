/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:27:07 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/18 21:42:30 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
		p[len] = 0;
	return (b);
}
