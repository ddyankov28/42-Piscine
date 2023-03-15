/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:46:26 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/20 11:20:36 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;
	int	result;

	a = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (a <= nb)
	{
		result = result * a;
		a++;
	}
	return (result);
}
