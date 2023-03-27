/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:38:51 by ddyankov          #+#    #+#             */
/*   Updated: 2023/03/27 22:22:18 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{	
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && nb > -2147483648)
	{	
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{	
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(7);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	return (0);
}*/
