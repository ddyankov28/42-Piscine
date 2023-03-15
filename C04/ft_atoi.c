/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:28:49 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/19 13:32:37 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	a;

	result = 0;
	sign = 1;
	a = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{	
		if (str[a] == '-')
			sign *= -1 ;
		a++;
	}
	while ((str[a] >= 48 && str[a] <= 57) && (str[a] != '\0'))
	{
		result = result * 10 + str[a] - 48;
		a++;
	}
	result = result * sign;
	return (result);
}
