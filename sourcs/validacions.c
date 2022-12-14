/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validacions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:36:32 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/02 11:41:56 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	valid_stack(t_stack *stack)
{
	int	index;

	index = 1;
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (index);
		stack = stack->next;
		index++;
	}
	return (0);
}

int	repeat(char **argv)
{
	int	index;

	index = 0;
	while (argv[++index])
	{
		if (!ft_strncmp(argv[0], argv[index], (ft_strlen(argv[index]) + 1)))
			return (1);
	}
	return (0);
}
