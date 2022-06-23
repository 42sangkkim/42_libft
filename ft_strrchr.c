/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:59:54 by sangkkim          #+#    #+#             */
/*   Updated: 2022/06/20 13:03:09 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p)
		p++;
	while(*p != c)
	{
		if (p == s)
			return (NULL);
		p--;
	}
	return (p);
}
