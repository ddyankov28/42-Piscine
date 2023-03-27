/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:38:43 by ddyankov          #+#    #+#             */
/*   Updated: 2023/03/27 22:52:39 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a = 2;
	int	b = 8;
	int *pa = &a;
	int *pb = &b;
	printf("before swap: %d %d\n", a, b);
	ft_swap(pa, pb);
	printf("after swap: %d %d\n", a, b);
	return (0);
}*/
