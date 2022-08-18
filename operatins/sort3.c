/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:01:38 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/17 18:24:50 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rra(t_stack **stack_a)
{
	t_stack	*tmp;

	if ((*stack_a)->next)
	{
		tmp = ft_stklast(*stack_a);
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		tmp->next = (*stack_a);
		(*stack_a)->prev = tmp;
		(*stack_a) = tmp;
	}
}

void	rrb(t_stack **stack_b)
{
	t_stack	*tmp;

	if ((*stack_b)->next)
	{
		tmp = ft_stklast(*stack_b);
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		tmp->next = (*stack_b);
		(*stack_b)->prev = tmp;
		(*stack_b) = tmp;
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}