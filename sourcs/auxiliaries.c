/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliaries.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:02:51 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/25 10:27:19 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	my_clear(t_stack *stack, int flg)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
	stack = NULL;
	if (flg)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("value = %d\n", stack->content);
		stack = stack->next;
	}
	printf("\n");
}
