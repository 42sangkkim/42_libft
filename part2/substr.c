/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:40:59 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/18 22:45:52 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	strlcat(sub, s, len + 1);
	return (sub);
}
