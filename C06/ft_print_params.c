/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:34:36 by ddyankov          #+#    #+#             */
/*   Updated: 2023/03/27 23:31:16 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{	
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{	
		j = 0;
		while (av[i][j])
			ft_putchar(av[i][j++]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
