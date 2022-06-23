/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:28:58 by sangkkim          #+#    #+#             */
/*   Updated: 2022/06/23 20:44:44 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_putnbr_buf(char *buffer, int n);
void		*ft_bzero(void *b, size_t n);
char		*ft_strdup(const char *s);
size_t		*ft_strlcat(char *dst, const char *src, size_t dst_size);

char	*ft_itoa(int n)
{
	char	buffer[12];
	char	*s;

	ft_bzero(buffer, 12);
	if (n == 0)
		buffer[0] = '0';
	else
		ft_putnbr_buf(buffer, n);
	s = ft_stdup(buffer);
	if (!s)
		return (NULL);
	else
		return (s);
}

static void	ft_putnbr_buf(char *buffer, int n)
{
	char	*digit_s[2];

	if (n < 0)
	{
		buffer[0] = '-';
		ft_putnbr_buf(buffer, -(n / 10));
		ft_putnbr_buf(buffer, -(n % 10));
	}
	else
	{
		if (n / 10)
			ft_putnbr_buf(buffer, n / 10);
		digit_s[0] = n % 10 + '0';
		digit_s[1] = '\0';
		ft_strlcat(buffer, digit_s, 12);
	}
}
