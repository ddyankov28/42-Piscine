/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:37:46 by ddyankov          #+#    #+#             */
/*   Updated: 2023/03/27 23:02:34 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' || str[i] >= 'A') && (str[i] <= 'z' || str[i] <= 'Z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_alpha("onlyalpha"));
	printf("%d\n", ft_str_is_alpha("this is not"));
	return (0);	
}*/
