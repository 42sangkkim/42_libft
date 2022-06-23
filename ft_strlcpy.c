/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:22:08 by sangkkim          #+#    #+#             */
/*   Updated: 2022/06/20 13:32:29 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	total_len;

	total_len = 0;
	while (total_len + 1 < dst_size && *src)
		dst[total_len++] = *src;
	dst[total_len] = '\0';
	while (*src++)
		total_len++;
	return (total_len);
}
