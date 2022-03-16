/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:42:26 by amaria-m          #+#    #+#             */
/*   Updated: 2022/03/16 16:42:27 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../42_libft/libft.h"
#include "../push_swap.h"
#include "../../ft_printf/ft_printf.h"

void	ft_sa(t_dlst *stack)
{
	int	value;

	if (ft_lstsize_d_lst(stack) < 2)
		return ;
	value = *(stack->next->content);
	*(stack->next->content) = *(stack->content);
	*(stack->content) = value;
}
