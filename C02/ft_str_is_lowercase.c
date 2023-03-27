/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:16:13 by ddyankov          #+#    #+#             */
/*   Updated: 2023/03/27 23:06:12 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("lowercase"));
	printf("%d\n", ft_str_is_lowercase("Not lowercase"));
	return (0);
}*/
