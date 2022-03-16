#include "../../42_libft/libft.h"
#include "../push_swap.h"
#include "../../ft_printf/ft_printf.h"

void ft_free_sort_scores(t_sort **sort_scores)
{
	t_sort **ex;

	ex = sort_scores;
	while (*sort_scores)
	{
		if ((*sort_scores)->moves_str)
			free((*sort_scores)->moves_str);
		free(*sort_scores);
		sort_scores++;
	}
	free(ex);	
}
