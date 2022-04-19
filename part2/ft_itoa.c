/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:44:54 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/19 12:56:26 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t len, size_t size);

int	build_uint(char *buffer, unsigned int n)
{
	if (n / 10)
		build_uint(buffer, n / 10);
	buffer[ft_strlen(buffer)] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char	*buffer;

	buffer = ft_calloc(12, sizeof(char));
	if (!buffer)
		return (NULL);
	if (n < 0)
	{
		buffer[0] = '-';
		build_uint(buffer, -n);
	}
	else
		build_uint(buffer, n);
	return (buffer);
}
