/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:34:22 by sangkkim          #+#    #+#             */
/*   Updated: 2022/04/19 13:20:00 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../list.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)-> next)
		ft_lstclear(&((*lst)-> next), del);
	del((*lst)-> content);
	free(*lst);
	*lst = NULL;
}
