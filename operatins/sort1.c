/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:46:59 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/19 11:33:57 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_stack **stack_a)
{
	t_stack	tmp;

	if ((*stack_a)->next)
	{
		tmp.content = (*stack_a)->next->content;
		(*stack_a)->next->content = (*stack_a)->content;
		(*stack_a)->content = tmp.content;
	}
	write(1, "sa\n", 3);
}

void	sb(t_stack **stack_b)
{
	t_stack	tmp;

	if ((*stack_b)->next)
	{
		tmp.content = (*stack_b)->next->content;
		(*stack_b)->next->content = (*stack_b)->content;
		(*stack_b)->content = tmp.content;
	}
	write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_b))
		(*stack_a)->content = (*stack_b)->content;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a))
		(*stack_b)->content = (*stack_a)->content;
	write(1, "pb\n", 3);
}
