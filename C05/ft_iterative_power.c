/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:55:15 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/20 12:57:21 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	n = nb;
	while (power > 1)
	{
		nb = nb * n;
		power--;
	}
	return (nb);
}
