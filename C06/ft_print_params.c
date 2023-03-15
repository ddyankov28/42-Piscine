/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:34:36 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/22 11:57:47 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{	
	int	a;
	int	b;

	a = 1;
	while (a < argc)
	{	
		b = 0;
		while (argv[a][b] != '\0')
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
