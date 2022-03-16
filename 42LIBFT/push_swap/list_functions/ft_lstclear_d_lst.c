/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_d_lst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:37:47 by amaria-m          #+#    #+#             */
/*   Updated: 2022/03/16 16:38:39 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../42_libft/libft.h"
#include "../push_swap.h"
#include "../../ft_printf/ft_printf.h"

// ft_lstclear_d_lst
void	ft_lstclear_d_lst(t_dlst **lst)
{
	t_dlst	*ptr;

	if (lst)
	{
		while (*lst)
		{
			ptr = (*lst)->next;
			free((*lst)->content);
			free(*lst);
			*lst = ptr;
		}
	}
	free(lst);
}
