/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:50:10 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/19 12:59:46 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		upper;
	int		lower;
	char	digit[2];

	upper = n / 10;
	lower = n % 10;
	if (n < 0)
	{
		write(fd, "-", 1);
		upper = -upper;
		lower = -lower;
	}
	if (upper)
		ft_putnbr_fd(upper, fd);
	digit[0] = lower + '0';
	write(fd, digit, 1);
}
