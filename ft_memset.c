/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:05:11 by sangkkim          #+#    #+#             */
/*   Updated: 2022/06/20 13:07:41 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t n);
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (n--)
		*p++ = (unsigned char)c;
	return (b);
}
