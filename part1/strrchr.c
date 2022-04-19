/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:50:51 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/18 21:54:12 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	while (i && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return (s + i);
	else
		return (NULL);
}
