/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:36:48 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_lstsize(stack_from) == 0)
		return (false);
	head_to = *stack_to;
	tmp = *stack_from;
	head_from = *stack_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (true);
}

bool	pa(t_list **stack_b, t_list **stack_a)
{
	if (push(stack_b, stack_a) == false)
		return (false);
	ft_putendl_fd("pa", 1);
	return (true);
}

bool	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == false)
		return (false);
	ft_putendl_fd("pb", 1);
	return (true);
}
