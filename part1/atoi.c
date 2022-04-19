/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:25:36 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/18 22:33:14 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

const int	ft_isspace(int c)
{
	return (c == '\t' || c == '\r' || c == '\n'
		|| c == '\f' || c == '\v' || c == ' ');
}

int	ft_atoi(const char *s)
{
	int	sign;
	int	val;

	while (ft_isspace(*s))
		s++;
	sign = 1 -  2 * (*s == '-');
	if (*s == '-' || *s == '+')
		s++;
	val = 0;
	while (ft_isdigit(*s))
		val = val * 10 + sign * (*s++ - '0');
	return (val);
}
