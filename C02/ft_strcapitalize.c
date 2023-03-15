/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:01:47 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/14 11:22:18 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{	
	int	a;

	a = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while ((str[a] != '\0'))
	{	
		if ((str[a] >= 'a' && str[a] <= 'z')
			&& ((str[a - 1] > 31 && str[a - 1] < 48)
				|| (str[a - 1] > 57 && str[a - 1] < 65)
				|| (str[a - 1] > 90 && str[a - 1] < 97)
				|| (str[a - 1] > 122 && str[a - 1] < 127)))
		{
			str[a] -= 32;
		}
		else if ((str[a] >= 'A' && str[a] <= 'Z')
			&& ((str[a - 1] >= 'A' && str [a - 1] <= 'Z')
				|| (str[a - 1] > 32 && str[a - 1] < 65)
				|| (str[a - 1] > 90 && str[a - 1] < 127)))
		{
			str[a] = str[a] + 32;
		}
		a++;
	}	
	return (str);
}
